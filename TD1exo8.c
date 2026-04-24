/* Variable  
N:entier
i:entier
DEBUT
AFFICHER:"Entrer la valeur de N"
LIRE: N
POUR (i=1; i<=N; i=i+1)
AFFICHER:(i)
FIN POUR
Fin
*/
#include<stdio.h>
  int main()
   {
    int N, i;
    printf("Entrer la valeur de N\n");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
     printf("%d\n",i);
    }
    return 0;
   }
   
