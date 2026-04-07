#include <stdio.h>

int main(void)
{
 int g =0;
 printf("βαθμός ");
 scanf("%d",&g);

 if(g>=5)
 {
    printf("Πέρασες!");
 }

 if(g<5)
 {
    printf("Δεν πέρασες.");
 }
 
 return 0;

}