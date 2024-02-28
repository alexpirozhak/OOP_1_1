//
// Created by Олександр Пірожак on 28.02.2024.
//


#include "gtest/gtest.h"
#include "../IntPower.h"

TEST(IntPowerTestSuite, IntPowerTest)
{
    IntPower intPower = makeIntPower(3, 4);
    EXPECT_EQ(intPower.getFirst(), 3);
    EXPECT_EQ(intPower.getSecond(), 4);

    intPower.setFirst(2);
    intPower.setSecond(3);
    EXPECT_EQ(intPower.getFirst(), 2);
    EXPECT_EQ(intPower.getSecond(), 3);
}

