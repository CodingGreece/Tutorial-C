#include <stdio.h>

int main(void)
{
    int num=0,num1=0;


    printf("give a number ");
    scanf("%d",&num);
    printf("give a number ");
    scanf("%d",&num1);

    int sum = 0;

    sum = num+num1;
    
    printf("%d \n",sum);


    return 0;
}