#include <stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0;
    printf("give two numbers ");
    scanf("%d%d",&num1,&num2);

    int prod =0,dif=0;

    prod=num1*num2;

    dif = num1-num2;

    
    
  printf("Tο γινόμενο είναι %d \n",prod);
  printf("Η διαφορά είναι %d \n",dif);

  
    return 0;
}