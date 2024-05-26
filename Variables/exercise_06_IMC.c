#include<stdio.h>

int main()
{
    float weight = 0; float high = 0;

    printf("what's your current weight?: ");
    scanf("%f", &weight);

    printf("what's your current high?: ");
    scanf("%f", &high);

    float calculate_imc = weight / (high * high);

    if (calculate_imc >= 18.5 && calculate_imc <= 24.9)
    {
        printf("%f you are completely normal, no problems\n", calculate_imc);
    }
    if (calculate_imc >= 25.0 && calculate_imc <= 29.9)
    {
        printf("%f you are with some overweight\n", calculate_imc);
    }
    if (calculate_imc >= 30.0 && calculate_imc <= 39.9)
    {
        printf("%f you are obese type 1\n", calculate_imc);
    }
    if (calculate_imc >= 40.0)
    {
        printf("%f , you are in danger my frined, obese type 2", calculate_imc);
    }

    printf("none of the options has been choosen");
    return 0;
}