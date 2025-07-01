#include "gmock/gmock.h"

class Cal {
public:
	//Code space
	int getMultiplyAccumulate(int a, int b, int c) {
		return (a * b) + c;
	}
};

//Test Case
TEST(CAL_TEST, MAC_TC_1) {
	int a = 3;
	int b = 5;
	int c = 2;

	Cal cal;

	EXPECT_EQ(17, cal.getMultiplyAccumulate(a, b, c));
}

int main(void) {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}