using CarmaCode.Core.Application.Contracts;
using CarmaCode.Core.Domain;
using CarmaCode.Core.Domain.Contracts;

namespace CarmaCode.Core.Application;

public class CreateUserUseCase : ICreateUser
{
    private readonly IUserRepository _userRepository;
    public CreateUserUseCase(IUserRepository userRepository)
    {
        _userRepository = userRepository;
    }
    
    public async Task<CreateUserOutput> ExecuteAsync(CreateUserInput input)
    {
        var user = new User
        {
            Id = Guid.NewGuid(),
            Name = input.Name,
            Email = input.Email,
            Password = input.Password,
        };
        
        var userCreated = await _userRepository.CreateAsync(user);
        
        return new CreateUserOutput
        {
            Id = userCreated.Id,
        };
    }
}
