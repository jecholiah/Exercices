#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,d,x0 = 0,x1=0,x2=0;
	
	printf("saisir un premier reel :");
	
	scanf("%f" ,&a);
	
	printf("saisir un second reel : ");
	
	scanf("%f" ,&b);
	
	printf("saisir un troisieme reel : ");
	
	scanf("%f",&c);
	d=(b*b)-(4*a*c);
	
	if(a==0){
		printf(" l equation n est pas une equation du second degre");
	}
	else{
			if(d<0){
		printf("pas de solution");
	}
	if(d==0){
		x0= -b/2*a;
		printf("la solution est %.2f",x0);
	}
	if(d>0){
		x1= (-b-sqrt(d))/(2*a);
		x2= (-b+sqrt(d))/(2*a);
		printf(" les solutions de l equation sont %.2f et %.2f :",x1,x2);
	}
	}
	printf("Hello World");
	printf("J'ai faim");
	printf("Je m'appelle Jecholiah");
	printf("Je pars en voyage dans 2 jours");
	

}
