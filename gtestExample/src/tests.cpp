// test file for gtests

#include "whattotest.cpp"
#include <gtest/gtest.h>

TEST(SquareRootTest, PositiveNos){
    ASSERT_EQ (6.0, squareRoot(36.0));
    ASSERT_EQ (11.0, squareRoot(121.0));
    ASSERT_EQ (0.0, squareRoot(0.0));
}

TEST(SquareRootTest, NegativeNos){
    ASSERT_EQ (-1.0, squareRoot(-15.0));
    ASSERT_EQ (-1.0, squareRoot(-36.0));
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}