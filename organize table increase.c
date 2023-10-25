#include<stdio.h>
int main(){ int T1[50],T2[50]; 
            int x,k,j,i,Max;
	do{
		printf("\t\t\t Give me the size of the Table less than (50)");
		scanf("%d",&x);
		printf("THE SIZE OF THE TABLE IS(%d)",x);
	}while(x<=0||x>50)
	

	for(i=0;i<x;i++){
		printf("T1[%d]=",i);
		scanf("%d",&T1[i]);
	}
	

for(i=0,j=x-1,Max=T1[0];i<x;i++,j--){
	
	for(k=0,k<x;k++){
		Max=(T1[k]>T1[0])?T1[k]:T1[0];
		T1[0]=Max;
		T1[k]={};
		printf("T1[%d]=%d\t",k,T1[k]);
	}
	T2[j]=Max;
}
return 0;	
}
