using System.ComponentModel.DataAnnotations;

namespace CarmaCode.Core.Domain;

public class BodyMassIndex
{
    public Guid Id { get; set; }
    
    [Required]
    [Range(0, 1000)]
    public double? Weight { get; set; }
    
    [Required]
    [Range(0, 1000)]
    public double? Height { get; set; }
    
    [Required]
    [Range(0, 140)]
    public int Age { get; set; }
    
    [Required]
    [EnumDataType(typeof(GenterType))]
    public GenterType Gender { get; set; }
    
    public BMICategoryType CategoryType { get; set; }
    
    public double? Bmi { get; set; }
    
    public Guid UserId { get; set; }
    
    public void Calculate()
    {
        Bmi = Weight / (Height * Height);
    }

    public void CategorizeFemale()
    {
        if (Bmi < 19)
        {
            CategoryType = BMICategoryType.Underweight;
        }
        else if (Bmi < 25)
        {
            CategoryType = BMICategoryType.Normal;
        }
        else if (Bmi < 30)
        {
            CategoryType = BMICategoryType.Overweight;
        }
        else
        {
            CategoryType = BMICategoryType.Obese;
        }
    }
    
    public void CategorizeMale()
    {
        if (Bmi < 20)
        {
            CategoryType = BMICategoryType.Underweight;
        }
        else if (Bmi < 26)
        {
            CategoryType = BMICategoryType.Normal;
        }
        else if (Bmi < 30)
        {
            CategoryType = BMICategoryType.Overweight;
        }
        else
        {
            CategoryType = BMICategoryType.Obese;
        }
    }
    
    public void Categorize()
    {
        switch (Gender)
        {
            case GenterType.Male:
                CategorizeMale();
                break;
            case GenterType.Female:
                CategorizeFemale();
                break;
            default:
                throw new("INVALID_GENDER");
        }
    }
}