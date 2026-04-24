/*Variables:
N:entier
i:entier
s:entier
j:entier
DEBUT
AFFICHER:"Entrer la valeur de N"
LIRE:N
s=0
POUR(j=1, j<=N, j=j+1)
f=1
POUR(j=i, i>=1, i=i-1)
f=f*(1/i)
s=s+f
FIN POUR
FIN POUR
AFFICHER:S
FIN 
*/
#include<stdio.h>
  int main()
   {
    int N, i, j; float f, s=0;
    printf("Entrer la valeur de N\n");
    scanf("%d", &N);
    for(j=1; j<=N; j++)
     {
      f=1;
      for(i=j; i>=1; i--)
       {
        f=f*(1.0/i);
        }
        s+=f;  
      }
    printf("la somme est %f\n", s);
    return 0;
    }
    
    
