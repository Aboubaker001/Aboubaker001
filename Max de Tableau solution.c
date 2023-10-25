#include<stdio.h>
int main(){ float t[10],m; 
             int i;
printf("Enter the values of the table=\n");

for (i=0;i<10;i++){
printf("T[%d]=",i);
scanf("%f",&t[i]); 
}
m=t[0];

for (i=0;i<10;i++){
if (m <= t[i])
m=t[i]; 
}
printf("The max value in the table is: %.2f",m);
return 0; }
