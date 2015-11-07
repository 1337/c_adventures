#include <assert.h>
#include <stdio.h>
#include "banned.h"

int main(void) {
	int number_of_words = 4;
	
	/* What the hell is an observer */
	/*@observer@*/
	char words[4][6] = {"a", "bunch", "of", "words"};

	int idx = 0;
	for (idx = 0; idx < number_of_words; idx++) {
		(void) printf("%s ", words[idx]);
	}

	return 0;
}