#include <stdio.h>

int main()
{
    int num=0,n1=0,n2=0,n3=0,n4=0,n5=0;

    printf("give a number: ");
    scanf("%d",&num);

    n1=num/10000;
    n2=(num/1000)%10;
    n3=(num/100)%10;
    n4 = (num/10)%10;
    n5 = num%10;

    printf(" %d \t %d \t %d \t %d \t %d \t",n1,n2,n3,n4,n5);

    return 0;

}

/*

1 Εκλέπτυνση

δήλωσε 6 ακέραιες μεταβλητές
γράψε 
διάβασε

2 Εκλέπτυνση

3%10
n1=num/10000
n2=(num/1000)%10
n3=(num/100)%100
n4 = (num/10)%10
n5 = num%10

γραψε ν1 \t 




*/