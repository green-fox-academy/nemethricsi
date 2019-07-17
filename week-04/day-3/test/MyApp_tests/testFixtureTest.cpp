#include "TestFixture.h"
#include <gtest/gtest.h>

class CarTest : public ::testing::Test {
protected:
    //executed before every test
    void SetUp() override {
        _car.refill();
    }
    //executed AFTER every test
    void TearDown() override {}

    TestFixture _car;
};

TEST_F(CarTest, DriveOnce) {
    _car.drive();
    EXPECT_EQ(_car.getGas(), 95);
}

TEST_F(CarTest, DriveThreeTimes) {
    _car.drive();
    _car.drive();
    _car.drive();
    EXPECT_EQ(_car.getGas(), 85);
}