#ifndef KORNI_H
#define KORNI_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <math.h>

extern "C" {
#include "myfunc.h"
}

TEST(korniTest, DPositive) {
    ASSERT_EQ(korni(1, 2, -3), -2.000000);
}

TEST(korniTest, DZero) {
    ASSERT_EQ(korni(1, 2, 1), -1.000000);
}

TEST(korniTest, DNegative) {
    ASSERT_EQ(korni(1, 1, 1), 0);
}

//Интеграционное
TEST(korniTest, Integral) {
    ASSERT_EQ(fibonachi(int(korni(1, -4, 4))), 2);
}

#endif // KORNI_H