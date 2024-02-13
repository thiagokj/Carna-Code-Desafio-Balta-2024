namespace CarmaCode.Core.Domain.Contracts;

public record CreateUserInput
{
    public string Name { get; set; } = default!;
    public string Email { get; set; } = default!;
    public string Password { get; set; } = default!;
    public string ConfirmPassword { get; set; } = default!;
    public bool ImNotARobot { get; set; }
}

public record CreateUserOutput
{
    public Guid Id { get; set; }
}

public interface ICreateUser : IUseCase<CreateUserInput, CreateUserOutput>
{
}
