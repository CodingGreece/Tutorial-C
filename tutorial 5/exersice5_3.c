#include <stdio.h>

int main(void)
{
  int num1=0,num2=0,num3=0;
    printf("please enter 3 nunbers = ");
    scanf("%d%d%d",&num1,&num2,&num3);
    

    if(num1==num2){
      if(num2==num3){
        printf("the numers is equal");
      }
    }
    
    if (num1>num2){
      if(num2==num3) {
         printf("the order is %d %d %d",num1,num2,num3);
    }
  }

  if (num1==num3){
      if(num2>num3) {
         printf("the order is %d %d %d",num2,num3,num1);
    }
  }


    
    
   if(num1>num2){
    if(num2>num3){
      printf("the order is %d %d %d",num3,num2,num1);

    }
       
   }
   

   if(num1>num3)
   {
    if(num3>num2) {
         printf("the order is %d %d %d",num2,num3,num1);
    }

   }
   

   if(num2>num1){
      if(num1>num3) {
        printf("the order is %d %d %d",num3,num1,num2);

      }
   }
 

  if(num2>num3)
  {
      if(num3>num1) {
         printf("the order is %d %d %d",num1,num3,num2);

      }
  }


  if(num3>num1){
     if(num1>num2) {
  printf("the order is %d %d %d",num2,num1,num3);
  }
  }
 

  if(num3>num2){
    if(num2>num1) {
        printf("the order is %d %d %d",num1,num2,num3);

    }
  }
 


    return 0;

}