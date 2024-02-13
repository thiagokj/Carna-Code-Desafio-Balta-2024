using CarmaCode.Core.Domain;

namespace CarmaCode.Core.Application.Contracts;

public interface IUserRepository : IRepository<User>
{
    public Task<User?> FindByEmail(string email);
}
