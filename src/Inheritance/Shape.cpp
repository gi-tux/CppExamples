/*
 * Shape.cpp
 *
 *  Created on: Sep 25, 2015
 *      Author: kelly
 */

#include "Shape.h"

#include <iostream>
#include <string>

using namespace std;

namespace gitux {
Shape::Shape() :
	height(0.0),
	width(0.0),
	radius(0.0),
	shapeType() {
	cout << "Shape constructor" << endl;
}

Shape::~Shape() {
	cout << "Shape destructor" << endl;
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
	UseEnumeration *myEnum = new UseEnumeration();
	return (myEnum->getEnumValue(shapeType));
}

} /* namespace gitux */
