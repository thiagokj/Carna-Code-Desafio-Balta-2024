namespace CarmaCode.Core.Domain.Contracts;

public record LoginInput
{
    public string Email { get; set; } = default!;
    public string Password { get; set; } = default!;
    public bool ImNotARobot { get; set; }
}

public record LoginOutput
{
    public Auth Auth { get; set; } = default!;
}

public interface ILogin : IUseCase<LoginInput, LoginOutput>
{
}
