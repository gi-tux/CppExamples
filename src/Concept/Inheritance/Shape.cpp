/*
 * Shape.cpp
 *
 *  Created on: Sep 25, 2015
 *      Author: kelly
 */

#include "../../Concept/Inheritance/Shape.h"

#include <iostream>
#include <string>

using namespace std;

namespace gitux {
Shape::Shape() :
	height(0.0),
	width(0.0),
	radius(0.0),
	shapeType() {
	// cout << "Shape constructor" << endl;
}

Shape::Shape(Shape *old) :
	height(old->height),
	width(old->width),
	radius(old->radius),
	shapeType(old->shapeType){
	// cout << "copy Shape constructor" << endl;
}

Shape::~Shape() {
	// cout << "Shape destructor" << endl;
}

void Shape::setHeight(double value) {
	height = value;
}

double Shape::getHeight() {
	return (height);
}

void Shape::setWidth(double value) {
	width = value;
}

double Shape::getWidth() {
	return (width);
}

void Shape::setRadius(double value) {
	radius = value;
}

double Shape::getRadius() {
	return (radius);
}

string Shape::getShapeType() {
	string enumType;
	UseEnumeration *myEnum = new UseEnumeration();
	enumType = myEnum->getEnumValue(shapeType);
	delete myEnum;
	return (enumType);
}

} /* namespace gitux */
