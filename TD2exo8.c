#include<stdio.h>
int main()
{
	int A[50], max , min, i, N, n ,t ;
	printf("Entrer N la dimension de A : ");
	scanf("%d", &N);
	for(i=0; i<N; i++)
	{
		printf("Entrer une valeur du tableau:\n");
		scanf("%d", &A[i]);
	}
	max=A[0];
	for(i=1; i<N; i++)
	{
		if(max<A[i])
		{
			max=A[i];
			n=i;
		}
	}
	printf("La valeur max est %d \n", max);
	printf("La valeur max se trouve dans A[%d]\n", n);	
	min=A[0];
	for(i=1; i<N; i++)
	{
		if(min>A[i])
		{
			min=A[i];
			t=i;
		}
	}
	printf("La valeur minimum est %d \n", min);
	printf("La valeur minimum se trouve dans A[%d]\n", t);
	return 0;
}