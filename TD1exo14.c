/*Variables
N:entier
i:entier
s:entier
DEBUT
AFFICHER:"Entier la valeur de N"
LIRE: N
S=1
POUR(i=2; i<=N; i=i+1)
s=s+1/i
FIN POUR
AFFICHER: s
FIN 
*/
#include<stdio.h>
 int main ()
  {
   int N, i; float s=0;
   printf("Entrer la valeur de N\n");
   scanf("%d", &N);
   for(i=1; i<=N; i++)
   {
    s=(s+(1.0/i));
    }
   printf("%f\n",s);
   return 0;
  }











































































































