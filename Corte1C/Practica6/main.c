#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 1;
	
inicio:
    if (i <= 25) {
    	printf ("i - %d\n", i);
    	i++;
    	goto inicio;
	}
	return 0;
}
