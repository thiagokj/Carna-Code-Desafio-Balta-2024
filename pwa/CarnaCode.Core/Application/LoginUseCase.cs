using CarmaCode.Core.Application.Contracts;
using CarmaCode.Core.Domain;
using CarmaCode.Core.Domain.Contracts;

namespace CarmaCode.Core.Application;

public class LoginUseCase : ILogin
{
    private readonly IUserRepository _userRepository;
    private readonly IAuthRepository _authRepository;

    public LoginUseCase(IUserRepository userRepository, IAuthRepository authRepository)
    {
        _userRepository = userRepository;
        _authRepository = authRepository;
    }
    
    public async Task<LoginOutput> ExecuteAsync(LoginInput input)
    {
        var user = await _userRepository.FindByEmail(input.Email);
        
        if (user == null)
        {
            throw new Exception("User not found");
        }
        
        if (user.Password != input.Password)
        {
            throw new Exception("Invalid password");
        }

        var auth = new Auth
        {
            Token = user.Id.ToString()
        };

        await _authRepository.CreateAsync(auth);

        var loginOutput = new LoginOutput
        {
            Auth = auth,
        };

        return loginOutput;
    }
}
