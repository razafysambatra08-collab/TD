/*Variables
N:entier
i:entier
DEBUT
AFFICHER:"Entrer la valeur de N"
LIRE: N
POUR(i=1, i<=N; i=i+1)
SI (N mod i = 0) ALORS
AFFICHER: i
FIN POUR
FIN SI
FIN
*/
#include<stdio.h>
 int main ()
  {
   int N, i;
   printf("Enrer la valeur de N\n");
   scanf("%d", &N);
   for(i=1; i<=N; i++)
    {
     if(N%i==0)
      {
       printf("%d\n", i);
      }
     }
    return 0;
   }
