/*
 * Triangle.cpp
 *
 *  Created on: Sep 26, 2015
 *      Author: kelly
 */

#include <iostream>
#include "../../Concept/Inheritance/Triangle.h"

namespace gitux {

using namespace std;

Triangle::Triangle() {
	shapeType = UseEnumeration::Triangle;
	// cout << "default Triangle constructor" << endl;
}

Triangle::Triangle(Triangle *old) {
	shapeType = old->shapeType;
	height = old->height;
	width = old->width;
	// cout << "copy Triangle constructor" << endl;
}

Triangle::Triangle(Shape *old) : Shape(old) {
	// cout << "copy2 Triangle constructor" << endl;
}

Triangle::Triangle(double newHeight, double newWidth) {
	shapeType = UseEnumeration::Triangle;
	height = newHeight;
	width = newWidth;
	// cout << "alternate Triangle constructor" << endl;
}


Triangle::~Triangle() {
	// cout << "Triangle destructor" << endl;
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
