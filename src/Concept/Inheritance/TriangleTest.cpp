/*
 * TriangleTest.cpp
 *
 *  Created on: Dec 4, 2015
 *      Author: kelly
 */

#include "TriangleTest.h"
#include <iostream>

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

namespace gitux {

using namespace std;

TriangleTest::TriangleTest() :
	myTriangle() {
}

TriangleTest::~TriangleTest() {
}

TEST_F(TriangleTest, isTriangle) {
	ASSERT_TRUE(myTriangle->isTriangle());
}

TEST_F(TriangleTest, triangleSize) {
	ASSERT_EQ(myTriangle->getHeight(), 3);
	ASSERT_EQ(myTriangle->getWidth(), 3);
	ASSERT_EQ(myTriangle->getRadius(), 0);
	ASSERT_EQ(myTriangle->getArea(), 4.5);
}

TEST_F(TriangleTest, triangleType) {
	ASSERT_NE(myTriangle->getShapeType(), "Circle");
	ASSERT_NE(myTriangle->getShapeType(), "Rectangle");
	ASSERT_EQ(myTriangle->getShapeType(), "Triangle");
}

} /* namespace gitux */

