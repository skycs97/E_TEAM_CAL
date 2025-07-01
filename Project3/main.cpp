#include "gmock/gmock.h"

using namespace testing;

class Cal {
public:
	//Code space
	int getSumSum(int a, int b, int c) { return a + b + c; }

  int getDivide (int a, int b) {
		if (b == 0) {
			return 0x7FFFFFFF; // Return a large number to indicate an error
		}
		return a / b;
  }
  
	int getMinus(int a, int b) {
		return a - b;
	}
};

//Test Case 
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

TEST(TEST, getMinus) {
	Cal c;
	EXPECT_EQ(1, c.getMinus(3, 2));
	EXPECT_EQ(2, c.getMinus(4, 2));
	EXPECT_EQ(3, c.getMinus(5, 2));
	EXPECT_EQ(4, c.getMinus(6, 2));
}

TEST(CalTest, t6) {
	Cal cal;
	EXPECT_EQ(10, cal.getSumSum(2, 3, 5));
}

int main(void) {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}