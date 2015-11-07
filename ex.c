#include <stdio.h>

int main(void) {
	char letters1[] = {'a', 'b', 'c', '\0'};
	char letters2[] = "Hello";
	char *letters3 = "World";
	
	(void) printf("%s %s\n", letters2, letters3);
	(void) printf("%s", letters1);

	return 0;
}