#include <stdio.h>

int main()
{
    int n =0;
    printf("give a number ");
    scanf("%d",&n);

    if((n%2)==0)
    {
        printf("άρτιος");
    
    }

    if((n%2)!=0)
    {
        printf("περιττός");
    
    }


    return 0;
}


/*

1 Εκλέπτυνση

1 ακέραια μεταβλητη 
γράψε 
δίαβασε 

2 Εκλέπτυνση

ΑΝ n%2 ==0 TOTE
γράψε άρτιος
ΤΕΛΟΣ_ΑΝ

ΑΝ n%2 != 0 TOTE
γράψε περιττός
ΤΕΛΟΣ_ΑΝ


*/