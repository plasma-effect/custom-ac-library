#include "atcoder/all"

#include <type_traits>

#include <gtest/gtest.h>

using namespace atcoder;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int mul100(int a) { return a * 100; }

TEST(BasicTest, UBSanitize) {
    int a = 1 << 30;
    ASSERT_DEATH(mul100(a), ".*");
}
