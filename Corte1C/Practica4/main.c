#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a;b;r;

int main(int argc, char *argv[]) {
	a=8;
	b=25;
	r=a+b;
	printf ("The result of adding %d and %d is: %d\n",a,b, r);
	
	if(r == 40){
		printf("The result %d if it is equal to = 40");
	}
	else{
		if(r < 40){
			printf("The result %d its equal to < 40",r);	
		}
		else{
			printf("The result it is > 40",r);
		}
	}
	
	return 0;
}

