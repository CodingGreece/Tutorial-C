#include <stdio.h>

int main(void)
{
 int num1, num2, num3, temp;

    printf("Please enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Βάζουμε num1 <= num2
    if(num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;

    }

    // Βάζουμε num1 <= num3
    if(num1>num3)
    {
        temp=num1;
        num1=num3;
        num3=temp;
        
    }
    
// Βάζουμε num2 <= num3
    if(num2>num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
        
        
    }

    printf("the order is %d %d %d",num1,num2,num3);

    
  
    return 0;

}