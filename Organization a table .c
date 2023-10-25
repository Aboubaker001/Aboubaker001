#include<stdio.h>
int main(){ double T1[10]; int T2[10],i,j,x,min;
      printf("\t\t\t********** The goal of this program is to orgnize the values ot table ********** \n   \t\t\t select the size of the table 1>SIZE>10\n ");
      
      do{
      	printf("x=");
      	scanf("%d",&x);
	  }while(x<1);
	  printf(" the size is %d\n",x);
	  
	  for(i=0;i<x;i++){
	  	printf("T1[%d]=",i);
	  	scanf("%d",&T1[i]);
	  }
	  min=0;
    for(j=x;j>=0;j--){
        for(i=1;i<x;i++){
        min=(T1[0]>T1[i])?T1[0]:T1[i];
        T1[0]=min;
        min=T1[0];
		}
		T2[j]=min;
	}
	  
	  for(i=0;i<x;i++){
	  	printf("\t\t\t T1[%d]=%d",i,T2[i]);
	  }
	  return 0;
}
