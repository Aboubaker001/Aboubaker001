#include <stdio.h>
void main ()
{ float t[10],m; int i;

printf("entrez les elements de tableau=\n");

for (i=0;i<10;i++){
scanf("%f",&t[i]); }

m=t[0];

for (i=0;i<10;i++){
if (m <= t[i])
m=t[i]; 
}

printf("le max du tableau= %.2f",m); }
