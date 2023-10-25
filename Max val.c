#include<stdio.h>
int main(){ int T1[50],x,i,max;
printf("\t\t****** This program to select the max value in table *****\n \t\t\tGive me the size of this table 50<x<1\n");
	do{
		printf("\t\t\tPositive value x=");
		scanf("%d",&x);
	}while(x<1);
	
	printf("\t\t\tFull the table please!\n");
	for(i=0;i<x;i++){
		printf("\t\t\tT1[%d]=",i);
		scanf("%d",&T1[i]);
	}
	
	for(i=0,max=0;i<x;i++){
		max=(T1[0]<T1[i])?T1[i]:T1[0];
		T1[0]=max;
	}
	printf("\n\t\t\tThe max value is : %d\n",max);
	printf("\n\n\t\t\t********* END **********");
	return 0;
}
