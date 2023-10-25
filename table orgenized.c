#include<stdio.h>
int main(){ int T[50],i,j,x,t,b;
	printf("\t\t\t********** PROGRAM TO ORGENIZE ELEMENTS OF TABLE **********\n");
	printf("\t\t\t        Select the size of the table 2<SIZE<50 \n");
	
	do{
		printf("\t\t\tx=");
		scanf("%d",&x);
	}while(x<1);
	printf("\n \t\t\t The size of the table is: (%d)\n",x);
	
	for(i=0;i<x;i++){
		printf("\t\t\t T[%d]=",i);
		scanf("%d",&T[i]);
	}
	
for (i=0;i<x-1;i++){
   j=i+1;
while(j<=x){
    if (T[j] < T[i]){
	 b=T[j];
	 T[j]=T[i];
	 T[i]=b; }
	 j=j+1;}
	  }
	printf("\n \t\t\t ******The New Table****** \n ");
	for(i=0;i<x;i++){
		printf("\t\t\t T[%d]=%d \n",i,T[i]);
	}
	return 0;
}
