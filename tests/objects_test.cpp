#include "batch.hpp"
#include "variety.hpp"
#include <farm.hpp>
#include <gtest/gtest.h>
#include <utils.hpp>

float prod[10] = {10};
variety var(10, "Bourbon", prod);

TEST(ObjectsTest, CalculateByFarm)
{

}

TEST(ObjectsTest, CalculateByBatch)
{

}

TEST(ObjectsTest, CalculateBySubBatch)
{
    sub_batch sub("BOU", var, 1350);

    ASSERT_FLOAT_EQ(13500, sub.calc_production(2023));
}

TEST(CodesTest, Generate)
{
    std::string code = gen_code("PRUEBA");

    ASSERT_EQ("PRU", code.c_str());
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


