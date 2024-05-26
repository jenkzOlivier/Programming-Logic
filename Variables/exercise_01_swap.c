#include<stdio.h>

//deferencing pointers to acess the direct values that are in those adress.
void swap(int *firstValue, int *seccondValue)
{
    //simple swap using variables.
    int temp = *firstValue;
    *firstValue = *seccondValue;
    *seccondValue = temp;
}


int main()
{
    int a = 15;
    int b = 9;

    printf("Before: %d | %d\n\n", a, b);

    // Sending the Address where those vaiables are located at. otherwhise it would be
    // call by value and it would send only a copy, but in this case it's changint the actual value
    //at that address.
    swap(&a,&b);

    printf("After:  %d | %d\n\n", a, b);

    // and this is the "default" way of swaping
    int c = a;
    a = b;
    b = c;

    printf("After-Default:  %d | %d", a, b);
    return 0; 
}