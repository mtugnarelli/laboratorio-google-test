
#include "matematica.h"
#include <string>

unsigned long int factorial(unsigned short int n) {

    if (n > 20) {

        throw std::string("No se puede calcular el factorial de un valor mayor a 20");
    }

    unsigned long int factorial = 1;

    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }

    return factorial;
}
