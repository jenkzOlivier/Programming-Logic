#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber = rand() % 101;
    int lifes = 10;
    int awser = 0;
    srand(time(NULL));

    while (lifes != 0)
    {
        printf("what's the number?: ");
        scanf("%d", &awser);

        if (awser != randomNumber)
        {
            printf("Wrong number %d ", awser);
            if (awser > randomNumber)
            {
                printf("way too high dude!\n");
            }
            printf("way to down dude.");
            lifes--;
        }
        if (awser == randomNumber)
        {
            printf("%d was the correct number!\n", randomNumber);
            break;
        }
    }
    return 0;
}