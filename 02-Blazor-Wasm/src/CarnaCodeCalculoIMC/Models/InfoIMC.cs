using System.ComponentModel.DataAnnotations;

namespace CarnaCodeCalculoIMC.Models;
public class InfoIMC
{
    [Required(ErrorMessage = "Informe uma altura maior que 50cm")]
    [Range(51, double.MaxValue, ErrorMessage = "A altura deve ser maior que  50cm")]
    public double Height { get; set; }

    [Required(ErrorMessage = "Informe um peso maior que 5KG")]
    [Range(6, double.MaxValue, ErrorMessage = "O peso deve ser maior que 5KG")]
    public double Weight { get; set; }

    [Required(ErrorMessage = "Selecione uma opção")]
    [NotDefaultEnumValue(Gender.NotSelected, ErrorMessage = "Selecione entre Masculino ou Feminino")]
    public Gender Gender { get; set; } = Gender.NotSelected;

    public bool IsSenior { get; set; } // 65+
}

public enum Gender
{
    NotSelected = 0,
    Male = 1,
    Female = 2
}

public class NotDefaultEnumValueAttribute : ValidationAttribute
{
    private readonly object _defaultValue;

    public NotDefaultEnumValueAttribute(object defaultValue)
    {
        _defaultValue = defaultValue;
    }

    protected override ValidationResult IsValid(object value, ValidationContext validationContext)
    {
        if (value == null || value.Equals(_defaultValue))
        {
            return new ValidationResult(ErrorMessage ?? $"The default value ({_defaultValue}) is not valid.");
        }
        return ValidationResult.Success;
    }
}