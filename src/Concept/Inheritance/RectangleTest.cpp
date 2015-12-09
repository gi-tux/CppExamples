/*
 * RectangleTest.cpp
 *
 *  Created on: Dec 8, 2015
 *      Author: kelly
 */

#include "RectangleTest.h"
#include <iostream>

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

namespace gitux {

RectangleTest::RectangleTest() {
	// TODO Auto-generated constructor stub

}

RectangleTest::~RectangleTest() {
	// TODO Auto-generated destructor stub
}


TEST_F(RectangleTest, isRectangle) {
	ASSERT_TRUE(myRectangle->isRectangle());
}

TEST_F(RectangleTest, rectangleSize) {
	ASSERT_EQ(myRectangle->getHeight(), 3);
	ASSERT_EQ(myRectangle->getWidth(), 4);
	ASSERT_EQ(myRectangle->getRadius(), 0);
	ASSERT_DOUBLE_EQ(myRectangle->getArea(), 12);
}

TEST_F(RectangleTest, rectangleType) {
	ASSERT_NE(myRectangle->getShapeType(), "Circle");
	ASSERT_EQ(myRectangle->getShapeType(), "Rectangle");
	ASSERT_NE(myRectangle->getShapeType(), "Triangle");
}

} /* namespace gitux */
