using System.Text.Json;
using CarmaCode.Core.Application.Contracts;
using Microsoft.JSInterop;

namespace CarnaCode.Infra.Repository;

public abstract class LocalStorageRepository<TModel> : IRepository<TModel>
{
    protected readonly IJSRuntime _jsRuntime;
    
    protected LocalStorageRepository(IJSRuntime jsRuntime)
    {
        _jsRuntime = jsRuntime;
    }

    public async Task<TModel> CreateAsync(TModel model)
    {
        var oldJsonString = await _jsRuntime.InvokeAsync<string>("localStorage.getItem", typeof(TModel).Name);

        if (string.IsNullOrEmpty(oldJsonString))
        {
            var newJson = JsonSerializer.Serialize(new[] {model});
            
            await _jsRuntime.InvokeVoidAsync("localStorage.setItem", typeof(TModel).Name, newJson);
        }
        else
        {
            var oldModels = JsonSerializer.Deserialize<IEnumerable<TModel>>(oldJsonString);
            
            var newModels = oldModels!.Append(model);
            
            var newJson = JsonSerializer.Serialize(newModels);
            
            await _jsRuntime.InvokeVoidAsync("localStorage.setItem", typeof(TModel).Name, newJson);
        }
        
        return model;
    }

    public async Task<TModel?> FindByIdAsync(Guid id)
    {
        var jsonString = await _jsRuntime.InvokeAsync<string>("localStorage.getItem", typeof(TModel).Name);
        
        if (string.IsNullOrEmpty(jsonString))
        {
            return default;
        }

        var models = JsonSerializer.Deserialize<IEnumerable<TModel>>(jsonString);
        
        if (models == null)
        {
            return default;
        }
        
        var model = models.FirstOrDefault(m => m.GetType().GetProperty("Id")!.GetValue(m).Equals(id));

        return model;
    }

    public async Task<IEnumerable<TModel>> FindAllAsync()
    {
        var jsonString = await _jsRuntime.InvokeAsync<string>("localStorage.getItem", typeof(TModel).Name);
        
        return JsonSerializer.Deserialize<IEnumerable<TModel>>(jsonString) ?? Enumerable.Empty<TModel>();
    }

    public async Task<TModel> UpdateAsync(Guid id, TModel model)
    {
        var jsonString = await _jsRuntime.InvokeAsync<string>("localStorage.getItem", typeof(TModel).Name);
        
        var models = JsonSerializer.Deserialize<IEnumerable<TModel>>(jsonString);
        
        var oldModel = models!.FirstOrDefault(m => m.GetType().GetProperty("Id")!.GetValue(m).Equals(id));
        
        if (oldModel == null)
        {
            throw new InvalidOperationException("Model not found");
        }
        
        var newModels = models.Select(m => m.Equals(oldModel) ? model : m);
        
        var newJson = JsonSerializer.Serialize(newModels);
        
        await _jsRuntime.InvokeVoidAsync("localStorage.setItem", typeof(TModel).Name, newJson);
        
        return model;
    }

    public async Task DeleteAsync(Guid id)
    {
        var jsonString = await _jsRuntime.InvokeAsync<string>("localStorage.getItem", typeof(TModel).Name);
        
        var models = JsonSerializer.Deserialize<IEnumerable<TModel>>(jsonString);
        
        if (models == null)
        {
            throw new InvalidOperationException("Model not found");
        }
        
        var model = models.FirstOrDefault(m => m.GetType().GetProperty("Id")!.GetValue(m).Equals(id));
        
        if (model == null)
        {
            throw new InvalidOperationException("Model not found");
        }
        
        var newModels = models.Where(m => !m.Equals(model));
        
        var newJson = JsonSerializer.Serialize(newModels);
        
        await _jsRuntime.InvokeVoidAsync("localStorage.setItem", typeof(TModel).Name, newJson);
    }
}