#include "gmock/gmock.h"

class Cal {
public:
	//Code space
	int getSum(int a, int b)
	{
		return a + b;
	}
	int getMinus(int a, int b) {
		return a - b;
	}
};

//Test Case
TEST(Caltest, getSumTest) {
	Cal cal;
	EXPECT_EQ(0, cal.getSum(0, 0));
	EXPECT_EQ(5, cal.getSum(0, 5));
	EXPECT_EQ(7, cal.getSum(7, 0));
	EXPECT_EQ(13, cal.getSum(3, 10));

};

//Test Case
TEST(TEST, getMinus) {
	Cal c;
	EXPECT_EQ(1, c.getMinus(3, 2));
	EXPECT_EQ(2, c.getMinus(4, 2));
	EXPECT_EQ(3, c.getMinus(5, 2));
	EXPECT_EQ(4, c.getMinus(6, 2));
}

int main(void) {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}