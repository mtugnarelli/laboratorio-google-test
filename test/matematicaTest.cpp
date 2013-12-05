
#include "gtest/gtest.h"
#include "matematica.h"

TEST(MatematicaTest, factorialDe0) {

    ASSERT_EQ(1, factorial(0)) << "El factorial de 0 es 1";
}

TEST(MatematicaTest, factorialDe1) {

    ASSERT_EQ(1, factorial(1));
}

TEST(MatematicaTest, factorialDe2) {

    ASSERT_EQ(2, factorial(2));
}

TEST(MatematicaTest, factorialDe6) {

    ASSERT_EQ(720, factorial(6));
}

TEST(MatematicaTest, factorialDe14) {

    ASSERT_EQ(87178291200, factorial(14));
}

TEST(MatematicaTest, factorialDe20) {

    ASSERT_EQ(2432902008176640000, factorial(20));
}
