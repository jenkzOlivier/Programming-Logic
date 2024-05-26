#include<stdio.h>

int main()
{
    float hight = 0;  float base = 0;

    printf("what's the hight: ");
    scanf("%f", &hight);

    printf("what's the base: ");
    scanf("%f", &base);

    float awser = (base * hight) / 2;

    printf("here's the your Area: %2.f", awser);
    return 0;
}