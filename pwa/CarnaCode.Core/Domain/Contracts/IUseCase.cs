namespace CarmaCode.Core.Domain.Contracts;

public interface IUseCase<TInput, TOutput>
{
    public Task<TOutput> ExecuteAsync(TInput input);
}
