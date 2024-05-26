#include<stdio.h>

int main()
{
    int number = 0;
    //printf("witch number do you wanna see the multiplication table?: ");
    //scanf("%d", &number);

    while (number <= 10)
    {
        for(int i = 0; i <= 10; i++)
    {
        printf("|%d x %d = %d |\n",number, i, i*number);
    }
    number++;
    printf("\n");
    }
    
    return 0;
}