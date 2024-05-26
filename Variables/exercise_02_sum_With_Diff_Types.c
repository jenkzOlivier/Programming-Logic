#include<stdio.h>
int main()
{
    //creating 2 variables with different data types
    int awnser_01 = 0;
    float awnser_02 = 0;

    //asking the user to fill up all the information
    printf("what's the integer Number: ");
    scanf("%d", &awnser_01);

    printf("what's the Float Number: ");
    scanf("%f", &awnser_02);

    //declaration of a float variable that receives the addition between both awnsers.
    float sum = awnser_01 + awnser_02;

    //displaying only 2 decimal precisions after the "."
    printf("the Total sum is %.2f", sum);
    return 0;
}