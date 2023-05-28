#include "batch.hpp"
#include "variety.hpp"
#include <farm.hpp>
#include <gtest/gtest.h>

float prod[10] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
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

