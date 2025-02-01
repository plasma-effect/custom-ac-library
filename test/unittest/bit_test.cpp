#include "atcoder/internal_bit.hpp"

#include <numeric>

#include <gtest/gtest.h>

using namespace atcoder;
using ll = long long;
using ull = unsigned long long;

TEST(BitTest, CountrZero) {
    ASSERT_EQ(0, internal::countr_zero(1U));
    ASSERT_EQ(1, internal::countr_zero(2U));
    ASSERT_EQ(0, internal::countr_zero(3U));
    ASSERT_EQ(2, internal::countr_zero(4U));
    ASSERT_EQ(0, internal::countr_zero(5U));
    ASSERT_EQ(1, internal::countr_zero(6U));
    ASSERT_EQ(0, internal::countr_zero(7U));
    ASSERT_EQ(3, internal::countr_zero(8U));
    ASSERT_EQ(0, internal::countr_zero(9U));
    ASSERT_EQ(30, internal::countr_zero(1U << 30));
    ASSERT_EQ(0, internal::countr_zero((1U << 31) - 1));
    ASSERT_EQ(31, internal::countr_zero(1U << 31));
    ASSERT_EQ(0,
              internal::countr_zero(std::numeric_limits<unsigned int>::max()));
}

TEST(BitTest, CountrZeroConstexpr) {
    ASSERT_EQ(0, internal::countr_zero_constexpr(1U));
    ASSERT_EQ(1, internal::countr_zero_constexpr(2U));
    ASSERT_EQ(0, internal::countr_zero_constexpr(3U));
    ASSERT_EQ(2, internal::countr_zero_constexpr(4U));
    ASSERT_EQ(0, internal::countr_zero_constexpr(5U));
    ASSERT_EQ(1, internal::countr_zero_constexpr(6U));
    ASSERT_EQ(0, internal::countr_zero_constexpr(7U));
    ASSERT_EQ(3, internal::countr_zero_constexpr(8U));
    ASSERT_EQ(0, internal::countr_zero_constexpr(9U));
    ASSERT_EQ(30, internal::countr_zero_constexpr(1U << 30));
    ASSERT_EQ(0, internal::countr_zero_constexpr((1U << 31) - 1));
    ASSERT_EQ(31, internal::countr_zero_constexpr(1U << 31));
    ASSERT_EQ(0, internal::countr_zero_constexpr(
                     std::numeric_limits<unsigned int>::max()));
}
