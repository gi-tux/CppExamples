/*
 * RectangleTest.h
 *
 *  Created on: Dec 8, 2015
 *      Author: kelly
 */

#ifndef SRC_CONCEPT_INHERITANCE_RECTANGLETEST_H_
#define SRC_CONCEPT_INHERITANCE_RECTANGLETEST_H_

#include <gtest/gtest.h>
#include <iostream>
#include "Rectangle.h"

namespace gitux {

using namespace std;

class RectangleTest: public testing::Test {
public:
	RectangleTest();
	virtual ~RectangleTest();

	Rectangle *myRectangle;

protected:
	virtual void SetUp() {
		// cout << "Setup" << endl;
		myRectangle = new Rectangle(3, 4);
	}

	virtual void TearDown() {
		// Code here will be called immediately after each test
		// (right before the destructor).
		// cout << "TearDown" << endl;
		delete myRectangle;
	}
};

} /* namespace gitux */

#endif /* SRC_CONCEPT_INHERITANCE_RECTANGLETEST_H_ */
