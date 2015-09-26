/*
 * Shape.cpp
 *
 *  Created on: Sep 25, 2015
 *      Author: kelly
 */

#include <iostream>

#include "Shape.h"

using namespace std;

namespace gitux {
Shape::Shape() :
	height(0.0),
	width(0.0),
	radius(0.0) {
	// TODO Auto-generated constructor stub
	cout << "Shape constructor" << endl;
}

Shape::~Shape() {
	// TODO Auto-generated destructor stub
	cout << "Shape destructor" << endl;
}

void Shape::setHeight(double value) {
	height = value;
}

double Shape::getHeight() {
	return height;
}

void Shape::setWidth(double value) {
	width = value;
}

double Shape::getWidth() {
	return width;
}

void Shape::setRadius(double value) {
	radius = value;
}

double Shape::getRadius() {
	return radius;
}

} /* namespace gitux */
