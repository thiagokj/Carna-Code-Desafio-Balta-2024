using CarmaCode.Core.Application.Contracts;
using CarmaCode.Core.Domain;
using Microsoft.JSInterop;

namespace CarnaCode.Infra.Repository;

public class AuthLocalStorageRepository : LocalStorageRepository<Auth>, IAuthRepository
{
    public AuthLocalStorageRepository(IJSRuntime jsRuntime) : base(jsRuntime)
    {
    }
}
