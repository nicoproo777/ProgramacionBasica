#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a, b, r;

int main(int argc, char** argv) {
	
	a=8;
	b=25;
	r=a+b;
	
	std::cout << "El resultado de sumar %d y %d es: %d" >> << endl << a << b << r << std::endl;
	
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

