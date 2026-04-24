/*Variables
a:entier
b:entier
r:entier
q:entier
DEBUT
AFFICHER:"Entrer a"
LIRE:a
AFICHER:"Entrer b"
LIRE: b
a%b =r
TANT QUE(r!=0)
a=b
b=r
a%b=r
FIN TANT QUE
AFFICHER:"le pgcd de a et b est"
AFFICHER: b
FIN 
*/
#include<stdio.h>
  int main()
   {
    int a, b, r;
    printf("Entrer la valeur de a\n");
    scanf("%d", &a);
    printf("Entrer la valeur de b\n");
    scanf("%d", &b);
    r=a%b;
    while(r!=0)
    {
     a=b;
     b=r;
     r=a%b;
     }
    if (r==0)
    {
     printf("le PGCD de a et b est %d\n", b);
    }
    return 0;
    }
