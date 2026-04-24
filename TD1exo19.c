/*Variables
a:entier
b:entier
i:entier
r:entier
m:entier
DEBUT
AFFICHER:"Entrer la valeur de a"
LIRE : a
AFFICHER: "Entrer la valeur de b"
LIRE: b
m=1
POUR(i=2, i<a, i=i+1)
r=a%i
m=m*r
FIN POUR
SI (m==0) ALORS
AFFICHER "a n'est pas un nombre premier"
FIN SI
SI(m !=0) ALORS
AFFICHER:"a est un nombre premier"
FIN SI
m=1
POUR(i=2, i<b, i=i+1)
r=b%i
m=m*r
FN POUR
SI (m==0) ALORS
AFFICHER:"b n'est pas un nombre premier"
FIN SI
SI (m!=0)
AFFICHER:"b est un nombre premier"
FIN SI
FIN
*/
#include<stdio.h>
  int main()
  {
   int a, b, i, r, m;
   printf("Entrer la valeur de a\n");
   scanf("%d", &a);
   printf("Entrer la valeur de b\n");
   scanf("%d", &b);
   if(a<2)
    {
     printf("%d n'est pas un nombre premier\n", a);
     }
   else
   {
    m=1;
    for(i=2; i<a; i++)
     {
      r=a%i;
      m*=r;
      }
      if(m==0)
       {
        printf("%d n'est pas un nombre premier\n", a);
        }
      else
        {
         printf("%d est un nombre premier\n", a);
         }
     }
    if(b<2)
     {
      printf("%d n'est pas un nombre premier\n", b);
      }
    else
     {
      m=1;
      for(i=2; i<b; i++)
       {
        r=b%i;
        m*=r;
        }
       if(m==0)  
        {
         printf("%d n'est pas un nombre premier\n", b);
        }
       else 
        {
         printf("%d est un nombre premier\n", b);
        }
      }
    return 0;
   }
