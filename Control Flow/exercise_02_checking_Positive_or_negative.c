#include<stdio.h>

int main()
{
  int variable;
  printf("what is the number:  ");
  scanf("%d", &variable);

  if(variable == 0)
  {
    printf("zero is the absence of quantity");
    return 0;
  }

  if(variable > 0)
  {
    printf("%d it´s a positive number", variable);
    return 0;
  }

  printf("%d it´s a negative number", variable);
  return 0;
}