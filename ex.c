#include <assert.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#include "banned.h"
#include "item_at.h"


int main(int argc, char *argv[]) {
	int idx = 0;
	if (argc == 0) {
		(void) printf("Eh");
		exit(EXIT_FAILURE);
	}

	for (; idx < argc; idx++) {
		(void) printf("%d %s", eh(), argv[idx]);
	}
	return 0;
}