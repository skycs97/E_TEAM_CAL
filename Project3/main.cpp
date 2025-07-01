#include "gmock/gmock.h"

class Cal {
public:
	//Code space
	int getMinus(int a, int b) {
		return a - b;
	}
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