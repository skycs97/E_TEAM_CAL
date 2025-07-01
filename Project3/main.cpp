#include "gmock/gmock.h"

using namespace testing;

class Cal {
public:
	//Code space
	int getSumSum(int a, int b, int c) { return a + b + c; }
};

//Test Case
TEST(CalTest, t6) {

	Cal cal;
	EXPECT_EQ(10, cal.getSumSum(2, 3, 5));
}

int main(void) {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}