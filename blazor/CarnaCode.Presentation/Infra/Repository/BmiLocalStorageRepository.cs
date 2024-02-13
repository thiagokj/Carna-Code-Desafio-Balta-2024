using CarmaCode.Core.Application.Contracts;
using CarmaCode.Core.Domain;
using Microsoft.JSInterop;

namespace CarnaCode.Infra.Repository;

public class BmiLocalStorageRepository : LocalStorageRepository<BodyMassIndex>, IBmiRepository
{
    public BmiLocalStorageRepository(IJSRuntime jsRuntime) : base(jsRuntime)
    {
    }
}
