#include <iostream>

int main(void) {
	
	int i=0;
	
	inicio:
		
		if(i<10){
			
			printf("i= %d\n", i);
			
			i++;
			
			goto inicio;
			
		}
	
	return 0;
	
}
