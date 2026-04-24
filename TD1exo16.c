/*Variables
N:entier
i:entier
s:entier
j:entier
DEBUT
AFFICHER: "Entrer la valeur de N"
LIRE: N
s=0
POUR(j=1; j<=N; j=j+1)
f=1
for(i=j; i>=1; (i=i-1))
f=f*i
s=s+f
FIN POUR
FIN
*/
#include<stdio.h>
 int main()
 {
  int N, i, f, j, s=0;
  printf("Entrer la valeur de N\n");
  scanf("%d", &N);
  for(j=1; j<=N; j++)
  {
    f=1;
   for(i=j; i>=1; i--)
     {
      f=f*i;
      }
      s=s+f;  
   }
  printf("%d\n", s);
  return 0;
  }
  
