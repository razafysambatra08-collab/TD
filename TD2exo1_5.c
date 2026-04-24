#include<stdio.h>
 int main()
 {
    int N, N2, i, j, n, s=0, max,somme_TNEG=0, somme_TPOS=0; float T[50], TPOS[50], TNEG[50], t;
    printf("Entrer un entier N inférieur à 50: ");
    scanf("%d", &N);
    if(N==0)
    {
      printf("la valeur de N ne peut pas être 0\n");
      printf("Veuillez réessayer: ");
      scanf("%d", &N);
    }
    for(i=0; i<N; i++)
    {
        printf("Entrer une valeur du tableau:\n");
        scanf("%f", &T[i]);
        s+=T[i];
    }
    printf("T[%d] = {", N);
    for(i=0; i<N-1; i++)
    {
     printf("%f, ", T[i]);
     }
    printf("%f}", T[N-1]);
    printf("\nla somme des éléments du tableau est: %d\n", s);
    max=T[0];
    for(i=0; i<N; i++)
    {
        if(max<=T[i])
        {
            max=T[i];
        }
    }
    printf("La valeur max du tableau est %d\n", max);
    for(i=0; i<N; i++)
    {
    if(max==T[i])
     {
      printf("la valeur max se trouve dans T[%d]\n", i);
     }
    }
    printf("Tableau sans la valeur 0\n");
    for(j=0; j<N; j++)
    {
    for(i=0; i+1<N; i++)
     {
      if(T[i]==0)
      { 
        t=T[i+1];
        T[i+1]=T[i];
        T[i]=t; 
      }
     }
    }
    n=0;
    for(i=0; i<N; i++)
     {
      if(T[i]==0)
      {
        n++;
      }
     } 
     N-=n;
     N2=N;
    printf("T[%d]={", N);
       for (n=0; n<N-1; n++)
       {
        printf("%f,", T[n]);
       }
    printf("%f}\n",T[N-1] );

    printf("Tableau positive et negative:\n");
    n=0;
    for(i=0; i<N; i++)
    {
      if(T[i]>0)
      {
         TPOS[n]=T[i];
         n++;
         somme_TPOS++;
      }
    }
    if (somme_TPOS != 0)
     {
       printf("TPOS[%d]={", somme_TPOS);
       for (n=0; n<somme_TPOS-1; n++)
       {
        printf("%f,", TPOS[n]);
       }
       printf("%f}\n",TPOS[somme_TPOS-1] );
      }
    else
      {
       printf("Il n'y a pas de valeur positive dans le tableau\n");
      }
     n=0;
     for(i=0; i<N; i++)
     { 
      if(T[i]<0)
      {
          TNEG[n]=T[i];
          n++;
          somme_TNEG++;
       }
     }
    if (somme_TNEG != 0)
     {
       printf("TNEG[%d]={", somme_TNEG);
       for (n=0; n<somme_TNEG-1; n++)
       {
        printf("%f,", TNEG[n]);
       }
       printf("%f}\n",TNEG[somme_TNEG-1] );
      }
      else
      {
       printf("Il n'y a pas de valeur negative dans le tableau\n");
      }
      printf("rangement inverse du tableau\n");
      for(j=0; j<N2; j++)
      {
      for (i=0; i+1<N; i++)
      {
        t=T[i];
        T[i]=T[i+1];
        T[i+1]=t;
        N--;
      }
      }
      printf("T[%d]={",N2);
       for (i=0; i<N2-1; i++)
       {
        printf("%f,", T[i]);
       }
       printf("%f}\n",T[N2-1] );
    return 0;
 } 
