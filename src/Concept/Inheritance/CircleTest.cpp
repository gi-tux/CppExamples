/*
 * CircleTest.cpp
 *
 *  Created on: Dec 8, 2015
 *      Author: kelly
 */

#include "CircleTest.h"
#include <iostream>

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

namespace gitux {

CircleTest::CircleTest() :
	myCircle() {
	// TODO Auto-generated constructor stub

}

CircleTest::~CircleTest() {
	// TODO Auto-generated destructor stub
}

TEST_F(CircleTest, isCircle) {
	ASSERT_TRUE(myCircle->isCircle());
}

TEST_F(CircleTest, circleSize) {
	ASSERT_EQ(myCircle->getHeight(), 0);
	ASSERT_EQ(myCircle->getWidth(), 0);
	ASSERT_EQ(myCircle->getRadius(), 3);
	ASSERT_DOUBLE_EQ(myCircle->getArea(), 28.274333882308138);
}

TEST_F(CircleTest, circleType) {
	ASSERT_EQ(myCircle->getShapeType(), "Circle");
	ASSERT_NE(myCircle->getShapeType(), "Rectangle");
	ASSERT_NE(myCircle->getShapeType(), "Triangle");
}

} /* namespace gitux */
