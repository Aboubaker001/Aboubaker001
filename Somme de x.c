#include<stdio.h>
int main (){int x,i,j,s,p;
	do{
		printf("Donnez un nombre positive\n x=");
		scanf("%d",&x);
	}while(x<=0);	
	for(i=1,s=0;i<=x;i++){
		s=s+i;}
	printf("La somme est: %d\n",s);
	
	return 0;
}
