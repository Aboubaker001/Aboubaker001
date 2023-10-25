#include<stdio.h>
int main(){
	int T[10][10];
int x,n,i,j;
	do{
		printf("Donnez un nombre positive\n x=");
		scanf("%d",&x);
	}while(x<=0);
	
	for(i=0;i=n-1;i++){
		for(j=0;j=n-1;j++){
			printf("[%d][%d]=",i,j);
		scanf("%d",&T[i][j]);
		}
	}
	printf("\t\t[%d]",T[0][0]);	
	for(i=0;i=n-1;i++){
		for(j=1;j=n-1;j++){
			printf("[%d]",T[i][j]);
			if(j=n-1){printf("\n\t\t");}
}
}
return 0;
}
