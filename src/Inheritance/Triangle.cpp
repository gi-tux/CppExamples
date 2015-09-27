/*
 * Triangle.cpp
 *
 *  Created on: Sep 26, 2015
 *      Author: kelly
 */

#include <iostream>

#include "Triangle.h"

namespace gitux {

using namespace std;

Triangle::Triangle() {
	shapeType = UseEnumeration::e_shape::Triangle;
	cout << "default Triangle constructor" << endl;
}

Triangle::Triangle(double newHeight, double newWidth) {
	shapeType = UseEnumeration::e_shape::Triangle;
	height = newHeight;
	width = newWidth;
	cout << "alternate Triangle constructor" << endl;
}


Triangle::~Triangle() {
	cout << "Triangle destructor" << endl;
}

double Triangle::getArea() {
	return ((height * width)/2.0);
}

bool Triangle::isTriangle() {
	if ((height > 0) && (width > 0)) {
		return (true);
	} else {
		return (false);
	}
}

} /* namespace gitux */
