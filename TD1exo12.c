/*Variables
N:entier
s:entier
i:entier
DEBUT
AFFICHER:"Entrer la valeur de l'entier N"
LIRE: N
s=0
POUR(i=1; i<=N; i=i+1)
s=s+i
FIN POUR
AFFICHER: s
FIN
*/
#include<stdio.h>
  int main()
  {
   int N, s, i;
    printf("Entrer la valeur de N\n");
    scanf("%d", &N);
    s=0;
    for(i=1; i<=N; i++)
     {
      s=s+i;
     }
    printf("%d\n", s);
    return 0;
  }
    
