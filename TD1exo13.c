/*Variables
N:entier
i:entier
m:entier
DEBUT
AFFICHER:"Entrer la valeur de N"
LIRE: N
m=1
POUR(i=2, i<=N, i=i+1)
m=m*i
FIN POUR
AFFICHER: m
FIN 
*/
#include<stdio.h>
 int main()
 {
  int N, i, m;
  printf("Entrer la valeur de N\n");
  scanf("%d", &N);
  m=1;
  for(i=2; i<=N; i++)
  {
   m=m*i;
  }
  printf("%d\n", m);
  return 0;
  }
  
