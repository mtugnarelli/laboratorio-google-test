
#include "gtest/gtest.h"
#include "busqueda.h"

class BusquedaTest : public ::testing::Test {

    protected:

        int* valores;

        BusquedaTest() {

            this->valores = new int[10];
            this->valores[0] = 4;
            this->valores[1] = 13;
            this->valores[2] = 16;
            this->valores[3] = 24;
            this->valores[4] = 37;
            this->valores[5] = 49;
            this->valores[6] = 50;
            this->valores[7] = 51;
            this->valores[8] = 53;
            this->valores[9] = 90;
        }

        ~BusquedaTest() {

            delete[] this->valores;
        }
};

TEST_F(BusquedaTest, buscarValorLocalizadoEnElCentro) {

    int posicion = buscar(this->valores, 0, 9, 49);

    ASSERT_EQ(5, posicion)  << "Posición en la que se encontró el valor buscado";
}

TEST_F(BusquedaTest, buscarValorLocalizadoAlPrincipio) {

    int posicion = buscar(this->valores, 0, 9, 4);

    ASSERT_EQ(0, posicion) << "Posición en la que se encontró el valor buscado";
}

TEST_F(BusquedaTest, buscarValorInexistente) {

    int posicion = buscar(this->valores, 0, 9, 12);

    ASSERT_EQ(-1, posicion) << "No se encontró el valor";
}
