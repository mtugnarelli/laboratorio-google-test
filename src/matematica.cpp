
#include "matematica.h"

unsigned long int factorial(unsigned short int n) {

    unsigned long int factorial = 1;

    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }

    return factorial;
}
