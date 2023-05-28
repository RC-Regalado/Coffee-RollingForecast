#include <gtest/gtest.h>
#include <map>
#include <stdexcept>

#include "utils.hpp"
#include "variety.hpp"
std::map<string, variety> m {
  { "TIM", variety() }
};

TEST(CodesTest, Empty){
    ASSERT_THROW(gen_code("", m), std::runtime_error);
}

TEST(CodesTest, Generate) {
  std::string code = gen_code("Prueba", m);

  ASSERT_EQ("PRU", code);
}

TEST(CodesTest, Duplicated){
    m["TMP"] = variety();

    std::string code = gen_code("Test Implementation", m);

    ASSERT_NE("TIM", code);
    ASSERT_NE("TMP", code);
}
