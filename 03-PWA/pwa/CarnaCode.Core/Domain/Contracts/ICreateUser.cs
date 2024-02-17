using System.ComponentModel.DataAnnotations;

namespace CarmaCode.Core.Domain.Contracts;

public record CreateUserInput
{
  [Required(ErrorMessage = "Informe seu nome")]
  public string Name { get; set; } = default!;

  [Required(ErrorMessage = "Informe seu email")]
  public string Email { get; set; } = default!;

  [Required(ErrorMessage = "Informe sua senha")]
  public string Password { get; set; } = default!;

  [Required(ErrorMessage = "Confirme sua senha")]
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
