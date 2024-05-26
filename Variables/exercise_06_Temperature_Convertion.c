#include<stdio.h>
int main()
{
    float celcius_temperature = 0; 
    float fahrenheit = 0;

    printf("what's the temperature in celcius?: ");
    scanf("%f", &celcius_temperature);

    fahrenheit = (celcius_temperature * 2) + 30;
    printf("fahrenheit: %f\n", fahrenheit);

    float celcius = (fahrenheit - 30) / 2;
    printf("celcuis: %f", celcius);

    return 0;
}