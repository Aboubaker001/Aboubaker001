#include<stdio.h>
#include<math.h>
main(){ float A,B,C,x1,x2,Delta;
printf("Tapez A\n Tapez B\n Tapez C\n");
scanf("%f %f %f",&A,&B,&C);
if(A==0){
	if(B==0){		
        if(C==0)
	          printf("There are infinty solotions in IR");	          
              else
            	printf("Imposiple Equation");
	 }    
	 else{
	 x1=-B/A;
	 printf("There is one solution x=%f.2",x1);	     
	 }
  
	  	if(Delta<0){
	  		printf("There is no solotion in IR");
		  }
		  if(Delta>0){
		  	x1=(-B+sqrt(Delta)/2*A);
		  	x2=(-B+sqrt(Delta)/2*A);
		  		printf("There are two solotion in IR\n x1=%f.2\n x2=%f.2",x1,x2);
		  }
		  if(Delta==0)
		  {
		  	x1=(-B/2*A);
		  		printf("There is one double solotion in IR\n x1=%f.2",x1);
		  }
		  
	}
}
