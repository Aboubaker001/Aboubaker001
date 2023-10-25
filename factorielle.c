#include<stdio.h>
int main(){ int fact,x,i;
do{
	printf("Donnez x>=0 \n x=");
	scanf("%d",&x);
	printf("x= %d \n",x);
}while(x<0);

if(x==0||x==1){
	printf("x!(factorielle)=1 \n"); }
	else{
		for(i=x,fact=1;i==0;i--){
			fact=fact*i;
		}
	}


	for(i=x+1;i<=x+10;i++){
		fact=fact*i;
		printf("factorielle de %d=%d \n",x,fact);
	}
	printf("x!(factrielle)=%d \n",fact);

	return 0;
}
