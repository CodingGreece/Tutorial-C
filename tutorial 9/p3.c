#include <stdio.h>

int main(void)
{
    int miles = 0;
    double gallon= 0.0;
    double mg=0;
    double sum=0;
    int c=0;
    double ave=0.0;
    double totalg=0.0;

    while(gallon !=-1 ){

        printf("%s","Καταχώρισε γαλόνια ή (τελειωσέ με το -1) :");
        scanf("%lf",&gallon);
        

        if( gallon!=-1){
        printf("%s","μίλια ");
        scanf("%d",&miles);
        mg= miles/gallon;
        sum+=miles;
        ++c;
        totalg+=gallon;
        printf("Τα μίλια ανά γαλόνι είναι %lf\n",mg);

        }
       


    
    }
    
    if(c>=1){
    ave=sum/totalg;
    printf(" τα συνολικά μίλια ανά γαλόνι είναι  %lf\n",ave);
 

    }
    
    return 0;
}

/* λαθος πλανο !!!!
 πρωτη εκλεπτυνση

 δηλωσε μεταβλητη int μιλια , double γαλονια double , double mg  ,double sum ολον τον γεμισματων
 int πληθος γεμισματων  double ave ολον των γεμισματων 


 δευτερη εκλεπτυνση 

  οσο το γαλονια != -1 επαναλαβε 
  1 μηνημα για εκχωρηση γαλονιων ή -1 
  2 διαβασμα μεταβλητης
  3 μηνυμα μιλια 
  4 διαβασμα μιλια 
  αν γαλονι !=-1
  5 μιλια mg= μιλια /γαλονι
   6 sum += mg;
   πληθος ++


  3 εκλεπτυνση 
  εντος του while 
  εκτυπωση mg μιλια ανα γαλονι

  τελος while 
  αν c=>1 τοτε   ave = sum/gallon

 






*/