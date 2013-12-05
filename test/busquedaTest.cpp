
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

TEST_F(BusquedaTest, buscarValorCentral) {


}

