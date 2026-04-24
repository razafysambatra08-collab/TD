/*Variables
N:entier
i:entier
s:entier
DEBUT
AFFICHER: "Entrer la valeur de N"
LIRE: N
s=0
POUR(i=0; i<=N, i=i+1)
s=s+pow(10,i)
FIN POUR
FIN 
*/
#include<stdio.h>
#include<math.h>
 int main()
 {
  int N, i, s=0;
  printf("Entrer la valeur de N\n");
  scanf("%d", &N);
  for(i=0; i<=N; i++)
   {
    s+=pow(10,i);
    }
  printf("%d\n",s);
  return 0;
  }
