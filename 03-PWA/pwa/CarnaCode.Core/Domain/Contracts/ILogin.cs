using System.ComponentModel.DataAnnotations;

namespace CarmaCode.Core.Domain.Contracts;

public record LoginInput
{
  [Required(ErrorMessage = "Informe seu email")]
  public string Email { get; set; } = default!;

  [Required(ErrorMessage = "Informe sua senha")]
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
