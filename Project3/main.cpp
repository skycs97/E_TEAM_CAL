#include "gmock/gmock.h"

class Cal {
public:
	//Code space
	int zegop(int a) { return a * a; }

};

//Test Case
TEST(KJE, ZegopTc)
{
	Cal cal;
	int a = 10;
	int expected = 100;
	int result = cal.zegop(a);

	EXPECT_EQ(expected, result);
}

TEST(KJE, ZegopMinusTc)
{
	Cal cal;
	int a = -10;
	int expected = 100;
	int result = cal.zegop(a);

	EXPECT_EQ(expected, result);
}

int main(void) {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}