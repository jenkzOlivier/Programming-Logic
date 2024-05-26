#include <stdio.h>

int main()
{
    float const taxRate = (10.40 / 100) * 100;
    float salary = 0;

    printf("what's your salary?:");
    scanf("%f", &salary);

    if (salary < 0)
    {
        printf("you don't have any money dude!\n");
    }
    if (salary > 0 && salary <= 2.112)
    {
        printf("you don't need to pay this tax!\n");
    }
    if (salary >= 2.112 && salary <= 2.827)
    {
        float total = salary * taxRate;
        printf("tax is 7 , this is how much tax you will pay %2.f", total);
    }
    if (salary > 2.827 && salary <= 3.751)
    {
        float total = salary * taxRate;
        printf("tax is 15, this is how much tax you will pay %2.f", total);
    }
    if (salary > 3.751 && salary <= 4.664)
    {
        float total = salary * taxRate;
        printf("tax is 22.5, this is how much tax you will pay %2.f", total);
    }
    printf("none of the options was chosen");
    return 0;
}