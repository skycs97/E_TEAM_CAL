#include "gmock/gmock.h"

using namespace testing;

class Cal {
public:
	int getDivide (int a, int b) {
		if (b == 0) {
			return 0x7FFFFFFF; // Return a large number to indicate an error
		}
		return a / b;
	}
};

TEST(CalTest, DivideByZero) {
	Cal cal;
	EXPECT_EQ(cal.getDivide(10, 0), 0x7FFFFFFF);
}

TEST(CalTest, DivideByNonZero) {
	Cal cal;
	EXPECT_EQ(cal.getDivide(10, 2), 5);
	EXPECT_EQ(cal.getDivide(10, 1), 10);
	EXPECT_EQ(cal.getDivide(10, -2), -5);
	EXPECT_EQ(cal.getDivide(-10, 2), -5);
	EXPECT_EQ(cal.getDivide(-10, -2), 5);
	EXPECT_EQ(cal.getDivide(0, -2), 0);
}
//Test Case


int main(void) {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}