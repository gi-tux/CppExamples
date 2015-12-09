/*
 * TriangleTest.h
 *
 *  Created on: Dec 4, 2015
 *      Author: kelly
 */

#ifndef SRC_CONCEPT_INHERITANCE_TRIANGLETEST_H_
#define SRC_CONCEPT_INHERITANCE_TRIANGLETEST_H_

#include <gtest/gtest.h>
#include <iostream>
#include "Triangle.h"

namespace gitux {
using namespace std;

class TriangleTest : public testing::Test {
public:
	TriangleTest();
	virtual ~TriangleTest();

	Triangle *myTriangle;

protected:
	virtual void SetUp() {
		cout << "Setup" << endl;
		myTriangle = new Triangle(3, 3);
	}

	virtual void TearDown() {
		// Code here will be called immediately after each test
		// (right before the destructor).
		cout << "TearDown" << endl;
		delete myTriangle;
	}
};

} /* namespace gitux */

#endif /* SRC_CONCEPT_INHERITANCE_TRIANGLETEST_H_ */
