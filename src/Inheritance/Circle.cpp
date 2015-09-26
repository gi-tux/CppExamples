/*
 * Circle.cpp
 *
 *  Created on: Sep 26, 2015
 *      Author: kelly
 */

#include <iostream>

#include "Circle.h"

using namespace std;

namespace gitux {

Circle::Circle() {
	cout << "default Circle constructor" << endl;
}

Circle::Circle(double newRadius) {
	radius = newRadius;
	cout << "alternate Circle constructor" << endl;
}

Circle::~Circle() {
	// TODO Auto-generated destructor stub
	cout << "Circle destructor" << endl;
}

double Circle::calculateArea() {
	return M_PI * radius * radius;
}

bool Circle::isCircle() {
	if (radius > 0) {
		return true;
	} else {
		return false;
	}
}

} /* namespace gitux */
