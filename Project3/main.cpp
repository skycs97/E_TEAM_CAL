#include "gmock/gmock.h"

class Cal {
public:
	//Code space
	int getGop(int a, int b)
	{
		return a * b;
	}
};

//Test Case
TEST(TS, TC_Gop)
{
	Cal cal;
	EXPECT_EQ(10, cal.getGop(2, 5));
}


int main(void) {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}