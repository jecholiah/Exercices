// Code pour calculer l'impot
#include<stdio.h>

int main(){
	float S,impot;
	printf("Entrer votre salaire: ");
	scanf("%d", &S);
	if(S>=35000)
	{
	impot=S*7/100;
	}
	else
	{
		impot=125;
	}
	printf("Impot a payer=%.2f", impot);
}
