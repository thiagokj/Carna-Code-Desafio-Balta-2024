namespace CarmaCode.Core.Domain.Contracts;

public record AddBmiOfUserInput
{
    public Guid UserId { get; set; }
    public BodyMassIndex BodyMassIndex { get; set; } = default!;
}

public record AddBmiOfUserOuput
{
    public Guid BmiId { get; set; }
}

public interface IAddBmiOfUserUseCase : IUseCase<AddBmiOfUserInput, AddBmiOfUserOuput>
{
}
