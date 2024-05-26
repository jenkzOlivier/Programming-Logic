#include<stdio.h>

int main()
{
    float metters = 0, secconds = 0;

    printf("how much Metters?: ");
    scanf("%f", &metters);

    printf("how much secconds?: ");
    scanf("%f", &secconds);


    float kilometers = (3.6 * metters);
    float KilometerPerHour = (kilometers / 3.6);

    printf("kilometers: %2.f\n", kilometers);
    printf("Kilometers per Hour: %2.f", KilometerPerHour);

    return 0;
}