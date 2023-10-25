#include<stdio.h>
int main(){int T[20],x,i,Max,p,k;
	do{
		printf("Give me the size of the table less than(20)\n S=");
		scanf("%d",&x);
		printf("The size is T[%d]\n",x);
	}while(x<=0||x>20);
	
	printf("\t\t\t*****  Full the table please  *****\n");
	for(i=0;i<=x-1;i++){
		printf("\tT[%d]=",i);
		scanf("%d",&T[i]);
	}
Max=T[0];
	for(i=1;i<x;i++){
            Max=(T[i]<T[0])?T[0]:T[i];
            T[0]=Max;
            
		
	}	     
      	printf("The Max value in the table is %d\n",Max);
return 0;
}
