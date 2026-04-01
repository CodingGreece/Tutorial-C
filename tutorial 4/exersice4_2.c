#include <stdio.h>

int main(void)
{
  int num1=5;
  int num2=5;
  int num3=5;
  

  if(num1==num2)
  {
    printf("ίσοι");
  }
  
  if(num1>num2)
  {
    printf("1\n");
  }

  if(num1>=num2)
  {
    printf("2");
  }

  if(num1<num2)
  {
    printf("3\n");
  }

  if(num1<=num2)
  {
    printf("4\n");
  }

  if(num1!=num2)
  {
    printf("5");
  }

  if(num1==num2)
  {
    if(num2==num3)
    {
        printf("9");
    }
  }

    return 0;

}