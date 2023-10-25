#include<stdio.h>
int main(){ int x,i,fact;

  do{
  	printf("Donnez votre positive nombre x>=0\n x=");
  	scanf("%d",&x);
  }while(x<0);
  
  for(i=1,fact=x;i<=x;i--){
  	fact=fact*i;
  }
  
  printf("%d!(fact):%d",x,fact);
  
  for(i=1;i<=x+10;i++){
  	fact=fact*i,x+=1;
  	printf("%d!(fact) est:%d",x,fact);
  }
  return 0;
}
