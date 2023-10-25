#include<stdio.h>
#include<math.h>
int main(){ int n; float prix;
	printf("Give me the number of the photocopie");
	scanf("%d",&n);
	if(n<=10)
		prix=n*5;
     if(n>10 && n<=20)
     prix=10*5+(n-10)*4
      if(n>30 && n<=50)
      prix=10*5+20*4+(n-30)*2.5;
      if(n>50){
     prix=10*5+20*4+20*2.5+(n-50)*1.5;
 }
 printf("the price of this operation : %f.2 DA",prix);
 return 0;
}
