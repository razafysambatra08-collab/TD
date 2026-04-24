#include<stdio.h>
int main()
{
	int Ux, Uy, Vx, Vy, p;
	printf("Entrer les coordonnées des 2 vecteurs\n");
	printf("Le vecteur U de coordonnée:\n");
	printf("x= ");
	scanf("%d", &Ux);
	printf("y= ");
	scanf("%d", &Uy);
	printf("Le vecteur V de coordonnée:\n");
	printf("x= ");
	scanf("%d", &Vx);
	printf("y= ");
	scanf("%d", &Vy);
	p=(Ux*Vx)+(Uy*Vy);
	printf("Le produit scalaire de U et V est: %d\n", p);
	return 0;
}