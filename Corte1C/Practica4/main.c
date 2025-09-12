#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a;b;r;

int main(int argc, char *argv[]) {
	a=8;
	b=25;
	r=a+b;
	printf ("El resultado de sumar %d y %d es: %d\n",a,b, r);
	
	if(r == 40){
		printf("El resultado %d si es igual = 40");
	}
	else{
		if(r < 40){
			printf("El resultado %d si es < 40",r);	
		}
		else{
			printf("El resultado si es > 40",r);
		}
	}
	
	return 0;
}
