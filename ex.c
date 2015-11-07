#include <stdio.h>

/**
 * Tabs are 8 characters, and thus indentations are also 8 characters.
 * There are heretic movements that try to make indentations 4 (or even 2!)
 * characters deep, and that is akin to trying to define the value of PI to
 * be 3.
 *
 * Now, some people will claim that having 8-character indentations makes
 * the code move too far to the right, and makes it hard to read on a
 * 80-character terminal screen.  The answer to that is that if you need
 * more than 3 levels of indentation, you're screwed anyway, and should fix
 * your program.
 *
 * https://www.kernel.org/doc/Documentation/CodingStyle
 */
int main(void) {
	double age = 10.0;

	/**
	 * C is a Spartan language, and so should your naming be.  Unlike Modula-2
	 * and Pascal programmers, C programmers do not use cute names like
	 * ThisVariableIsATemporaryCounter.  A C programmer would call that
	 * variable "tmp", which is much easier to write, and not the least more
	 * difficult to understand.
	 */
	long universe_of_defects = 1L * 1024L * 1024L * 1024L;

	int idx = 0;
	int areas[] = {1, 2, 3, 4, 5};

	/**
	 * In the strict library, [printing functions] are declared to
	 * return int, so ignored return value errors will be reported
	 */
	(void) puts("Hello world.");
	(void) printf("I am %f years old.\n", age);

	(void) printf(
		"The entire universe has %ld (%e) bugs.\n",
		universe_of_defects,
		(double) universe_of_defects
	);

	for (idx = 0; idx < 5; idx++) {
		(void) printf("%d", areas[idx]);
	}

	return 0;
}