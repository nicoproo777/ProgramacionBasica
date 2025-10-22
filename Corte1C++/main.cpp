#include <iostream>

int main() {
	
	int myNumbers[] = {10, 25, 50, 75, 100, 125, 150, 175}; 
	
	int length = sizeof(myNumbers) / sizeof(myNumbers[0]); 
	
	printf("%d", length); 
	
	return 0;
}
