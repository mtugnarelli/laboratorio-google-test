
#include "busqueda.h"

int buscar(int valores[], int desde, int hasta, int valorBuscado) {

    int encontrado = -1;

    while ((desde <= hasta) && (encontrado < 0)){

        int central = (desde + hasta) / 2;

        if (valores[central] == valorBuscado) {

            encontrado = central;

        } else {

            if (valores[central] > valorBuscado) {

                hasta = central - 1;

            } else {

                desde = central + 1;
            }
        }
    }

    return encontrado;
}
