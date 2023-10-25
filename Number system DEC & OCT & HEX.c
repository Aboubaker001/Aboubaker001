#include<stdio.h>
int A,B;
float x;
int main(){
printf("                *********************************************************\n                ****************  TRAVAUX PRATIQUE N: 1  ****************\n                *********************************************************\n ");
	    printf("Taper A=");
    	scanf("%d",&A);
    	printf(" %50 Taper B=");
    	scanf("%d",&B);
    	printf("\n*********************************************************\n  **************          RESULT          **************\n  *********************************************************");
    	printf("\n A(en decimal)= %d \n A(en Octal)= %o \n A (en hexa)= %x",A,A,A);
        printf("\n B(en decimal)= %d \n B(en Octal)= %o \n B (en hexa)= %x",B,B,B);
        x=(float)A/B;
 	    printf("\n RESULTAT= %.2f \n ***********************************************  Au Revoir  ***********************************************",x);
	    return 0;
}
