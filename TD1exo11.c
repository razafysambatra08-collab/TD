/*Variables
N:entier
i:entier
f:entier
DEBUT
AFFICHER"Entrer la valeur de N"
LIRE: N
f=1
POUR(i=N, i>=1, i=i-1)
f=f*i
FIN POUR
AFFICHER: f
FIN
*/
#include<stdio.h>
  int main()
   {
    int N, i, f;
    printf("Entrer la valeur de N\n");
    scanf("%d", &N);
    f=1;
    for(i=N; i>=1; i=i-1)
     {
      f=f*i;
     }
    printf("%d\n", f);
    return 0;
   }
