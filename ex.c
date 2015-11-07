#include <stdio.h>

int main(void) {
    double age = 10.0;

    /*In the strict library, [printing functions] are declared to return int, 
     *so ignored return value errors will be reported
     */
    (void) puts("Hello world.");
    (void) printf("I am %f years old.\n", age);

    return 0;
}