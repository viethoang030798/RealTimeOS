
//ITRYUPWANIASRRIN MTTSOTGREIEEGHUE NM R AAOG WACGLP CEM E-ESO  L!



#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    
   int i,b;
   char s[100];
   char output[100];
   printf("Enter the sentences: \n");
   fgets(s,100,stdin);
   printf("Result: \n");
   for(i=0; i<strlen(s); i++)
    {
        output[i]=s[i];
        printf("%c", output[i]);
        if(i==7||i==15||i==23||i==31||i==39||i==47||i==55||i==63)
        {
            printf("\n");
        }
        
    }
    b = sqrt(strlen(s));
    for (int a=0;a<b;a++){
    for(i=a; i< strlen(s); i=i+8){
        output[i]=s[i];
        printf("%c", output[i]);
        
        
    }
    }
    
}

    

/*
ITRYUPWA
NIASRRIN
 MTTSOTG
REIEEGHU
E NM R A
AOG WACG
LP CEM E
-ESO  L!
*/
