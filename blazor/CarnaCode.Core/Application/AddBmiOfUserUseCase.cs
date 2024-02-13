using CarmaCode.Core.Application.Contracts;
using CarmaCode.Core.Domain;
using CarmaCode.Core.Domain.Contracts;

namespace CarmaCode.Core.Application;

public class AddBmiOfUserUseCase : IAddBmiOfUserUseCase
{
    private readonly IBmiRepository _bmiRepository; 
        
    public AddBmiOfUserUseCase(IBmiRepository bmiRepository)
    {
        _bmiRepository = bmiRepository;
    }
    
    public async Task<AddBmiOfUserOuput> ExecuteAsync(AddBmiOfUserInput input)
    {
        var bmi = input.BodyMassIndex;
        bmi.UserId = input.UserId;
        bmi.Id = Guid.NewGuid();

        var bmiCreated = await _bmiRepository.CreateAsync(bmi);

        return new AddBmiOfUserOuput
        {
            BmiId = bmiCreated.Id
        };
    }
}