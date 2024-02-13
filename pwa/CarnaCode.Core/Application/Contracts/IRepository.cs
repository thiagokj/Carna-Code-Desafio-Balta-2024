namespace CarmaCode.Core.Application.Contracts;

public interface IRepository<TModel>
{
    public Task<TModel> CreateAsync(TModel model);
    public Task<TModel?> FindByIdAsync(Guid id);
    public Task<IEnumerable<TModel>> FindAllAsync();
    public Task<TModel> UpdateAsync(Guid id, TModel model);
    public Task DeleteAsync(Guid id);
}
