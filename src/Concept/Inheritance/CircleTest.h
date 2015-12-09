/*
 * CircleTest.h
 *
 *  Created on: Dec 8, 2015
 *      Author: kelly
 */

#ifndef SRC_CONCEPT_INHERITANCE_CIRCLETEST_H_
#define SRC_CONCEPT_INHERITANCE_CIRCLETEST_H_

#include <gtest/gtest.h>
#include <iostream>
#include "Circle.h"

namespace gitux {

using namespace std;

class CircleTest : public testing::Test {
public:
	CircleTest();
	virtual ~CircleTest();

	Circle *myCircle;

protected:
	virtual void SetUp() {
		cout << "Setup" << endl;
		myCircle = new Circle(3);
	}

	virtual void TearDown() {
		// Code here will be called immediately after each test
		// (right before the destructor).
		cout << "TearDown" << endl;
		delete myCircle;
	}
};

} /* namespace gitux */

#endif /* SRC_CONCEPT_INHERITANCE_CIRCLETEST_H_ */
