#include <gtest/gtest.h>
#include "Apple.h"


TEST(apple_check, test_apple){
EXPECT_EQ(getApple(), "apple");
}