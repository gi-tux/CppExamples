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
	shapeType = UseEnumeration::e_shape::Circle;
	cout << "default Circle constructor" << endl;
}

Circle::Circle(double newRadius) {
	shapeType = UseEnumeration::e_shape::Circle;
	radius = newRadius;
	cout << "alternate Circle constructor" << endl;
}

Circle::~Circle() {
	cout << "Circle destructor" << endl;
}

double Circle::getArea() {
	return (M_PI * radius * radius);
}

bool Circle::isCircle() {
	if (radius > 0) {
		return (true);
	} else {
		return (false);
	}
}

} /* namespace gitux */
