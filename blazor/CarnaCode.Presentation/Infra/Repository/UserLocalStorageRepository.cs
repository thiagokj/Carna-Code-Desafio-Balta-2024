using System.Text.Json;
using CarmaCode.Core.Application.Contracts;
using CarmaCode.Core.Domain;
using Microsoft.JSInterop;

namespace CarnaCode.Infra.Repository;

public class UserLocalStorageRepository : LocalStorageRepository<User>, IUserRepository
{
    public UserLocalStorageRepository(IJSRuntime jsRuntime) : base(jsRuntime)
    {
    }

    public async Task<User?> FindByEmail(string email)
    {
        var jsonString = await _jsRuntime.InvokeAsync<string>("localStorage.getItem", nameof(User));
        
        if (string.IsNullOrEmpty(jsonString))
        {
            return default;
        }

        var models = JsonSerializer.Deserialize<IEnumerable<User>>(jsonString);
        
        if (models == null)
        {
            return default;
        }

        var model = models.FirstOrDefault(m => m.Email.Equals(email));

        return model;
    }
}
