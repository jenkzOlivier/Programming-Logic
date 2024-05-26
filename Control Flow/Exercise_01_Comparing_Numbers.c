#include <stdio.h>
#include<stdlib.h>

int main()
{
  int *pointer = (int *)malloc(2 * sizeof(int));

  for(int i = 0; i < 2; i++)
    {
      printf("whats your number: ");
      scanf("%d", &pointer[i]);
    }

  if(pointer[0] == pointer[1])
  {
    printf("the numbers are equal");
  }

  if(pointer[0] != pointer[1])
  {
    printf("The numbers Are not Equal");
  }
  free(pointer);
  return 0;
}