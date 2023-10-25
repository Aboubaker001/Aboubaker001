#include<stdio.h>
main(){ long long x,i,fact;
   do{
   	printf("Enter the number you want to calcul his FACT nb>0\n nb=");
   	scanf("%d",&x);
   }while(x<0);
   
   if((x==0)||(x==1)){
   	printf("The FACT of your number is:1");
   }else{
   	for(i=1,fact=1;i<=x;i++){
   		fact=fact*i;
	   }
	   printf("The FACT of %d is:%d\n",x,fact);
   }
   for(i=x+1;i<=x+10;i++){
    fact=fact*i;
    printf("The FACT of %d = %d\n",i,fact);
   }
}
