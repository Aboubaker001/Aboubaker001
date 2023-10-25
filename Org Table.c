#include <stdio.h>
void main (){ int t[5],x; int i,j;

printf("entrez les elements de tableau=");
printf("\n");

for (i=0;i<5;i++){
scanf("%d",&t[i]); }

for (i=0;i<4;i++){
 j=i+1;

while (j<= 5){
 if (t[j] < t[i]){
  x=t[j];
t[j]=t[i];
t[i]=x; }
j=j+1;} 
}

printf("le tableau treir\n");

for (i=0;i<5;i++)
printf("%d\n",t[i]);
}
