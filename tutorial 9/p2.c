#include <stdio.h>
int main()
{
    int c=1;
    while(c<=8)
    {
        if(c%2==0)
        {
            printf("\n * * * * * * * *");
        }
        else{
            printf("\n* * * * * * * *  ");

        }
        c++;
    }
    return 0;
}