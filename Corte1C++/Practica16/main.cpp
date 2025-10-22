#include <iostream>

int main() {
	
	int edades[] = {20, 22, 18, 35, 48, 26, 87, 70}; 	

	float avg, sum = 0; 
	
	int i;

	int length = sizeof(edades) / sizeof(edades[0]); 

	for (i = 0; i < length; i++) { 
	
  		sum += edades[i]; 
  		
	}

	avg = sum / length; 

	printf("La edad promedio es igual a: %.2f", avg);	
	
	return 0;
	
}

