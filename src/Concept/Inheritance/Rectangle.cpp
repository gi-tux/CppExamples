/*
 * Rectangle.cpp
 *
 *  Created on: Sep 26, 2015
 *      Author: kelly
 */

#include "../../Concept/Inheritance/Rectangle.h"

#include <iostream>

#include "../../DataType/Enumeration/UseEnumeration.h"

namespace gitux {

using namespace std;

Rectangle::Rectangle() {
	shapeType = UseEnumeration::Rectangle;
	cout << "default Rectangle constructor" << endl;
}

Rectangle::Rectangle(Rectangle *old) {
	shapeType = old->shapeType;
	height = old->height;
	width = old->width;
	cout << "copy Rectangle constructor" << endl;
}

Rectangle::Rectangle(Shape *old) : Shape(old) {
	cout << "copy2 Rectangle constructor" << endl;
}

Rectangle::Rectangle(double newHeight, double newWidth) {
	shapeType = UseEnumeration::Rectangle;
	height = newHeight;
	width = newWidth;
	cout << "alternate Rectangle constructor" << endl;
}

Rectangle::~Rectangle() {
	cout << "Rectangle destructor" << endl;
}

double Rectangle::getArea() {
	return (height * width);
}

bool Rectangle::isRectangle() {
	if ((width > 0) && (height > 0)) {
		return (true);
	} else {
		return (false);
	}
}

bool Rectangle::isSquare() {
	if ((width == height) && (width > 0)) {
		return (true);
	} else {
		return (false);
	}
}

} /* namespace gitux */
