/*
 * Circle.cpp
 *
 *  Created on: Sep 26, 2015
 *      Author: kelly
 */

#include "../../Concept/Inheritance/Circle.h"

#include <iostream>


using namespace std;

namespace gitux {

Circle::Circle() {
	shapeType = UseEnumeration::Circle;
	cout << "default Circle constructor" << endl;
}

Circle::Circle(Circle *old) {
	radius = old->radius;
	shapeType = old->shapeType;
	cout << "copy Circle constructor" << endl;
}

Circle::Circle(Shape *old) : Shape(old) {
	cout << "copy2 Circle constructor" << endl;
}

Circle::Circle(double newRadius) {
	shapeType = UseEnumeration::Circle;
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
