/*
 * UseEnumeration.cpp
 *
 *  Created on: Sep 21, 2015
 *      Author: kfulks
 */

#include <iostream>

#include "UseEnumeration.h"

namespace gitux {

UseEnumeration::UseEnumeration() {
	// TODO Auto-generated constructor stub
	e_shape myShape = Polygon;
	std::cout << this->getEnumValue(myShape) << std::endl;
}

UseEnumeration::~UseEnumeration() {
	// TODO Auto-generated destructor stub
}

std::string UseEnumeration::getEnumValue(e_shape input) {
	std::string returnValue = "a";

	switch (input) {
	case e_shape::ConicSection:
		returnValue = this->conicSection;
		break;
	case e_shape::Circle:
		returnValue = this->circle;
		break;
	case e_shape::Ellipse:
		returnValue = this->ellipse;
		break;
	case e_shape::Parabola:
		returnValue = this->parabola;
		break;
	case e_shape::Polygon:
		returnValue = this->polygon;
		break;
	case e_shape::Triangle:
		returnValue = this->triangle;
		break;
	case e_shape::Equilateral:
		returnValue = this->equilateral;
		break;
	case e_shape::Isosceles:
		returnValue = this->isosceles;
		break;
	case e_shape::Obtuse:
		returnValue = this->obtuse;
		break;
	case e_shape::Acute:
		returnValue = this->acute;
		break;
	case e_shape::Scalene:
		returnValue = this->scalene;
		break;
	case e_shape::Quadrilateral:
		returnValue = this->quadrilateral;
		break;
	case e_shape::Rectangle:
		returnValue = this->rectangle;
		break;
	case e_shape::Square:
		returnValue = this->square;
		break;
	case e_shape::Rhombus:
		returnValue = this->rhombus;
		break;
	case e_shape::Trapezoid:
		returnValue = this->trapezoid;
		break;
	case e_shape::Pentagon:
		returnValue = this->pentagon;
		break;
	case e_shape::Hexagon:
		returnValue = this->hexagon;
		break;
	case e_shape::Octagon:
		returnValue = this->octagon;
		break;
	}
	return returnValue;
}

} /* namespace gitux */
