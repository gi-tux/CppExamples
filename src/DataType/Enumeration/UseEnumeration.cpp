/*
 * UseEnumeration.cpp
 *
 *  Created on: Sep 21, 2015
 *      Author: kfulks
 */

#include "UseEnumeration.h"

#include <iostream>
#include <string>


namespace gitux {

using namespace std;

UseEnumeration::UseEnumeration() {
	UseEnumeration::conicSection = "Conic Section";
	UseEnumeration::circle = "Circle";
	UseEnumeration::ellipse = "Ellipse";
	UseEnumeration::parabola = "Parabola";
	UseEnumeration::polygon = "Polygon";
	UseEnumeration::triangle = "Triangle";
	UseEnumeration::equilateral = "Equilateral";
	UseEnumeration::isosceles = "Isosceles";
	UseEnumeration::obtuse = "Obtuse";
	UseEnumeration::acute = "Acute";
	UseEnumeration::scalene = "Scalene";
	UseEnumeration::quadrilateral = "Quadrilateral";
	UseEnumeration::rectangle = "Rectangle";
	UseEnumeration::square = "Square";
	UseEnumeration::rhombus = "Rhombus";
	UseEnumeration::trapezoid = "Trapezoid";
	UseEnumeration::pentagon = "Pentagon";
	UseEnumeration::hexagon = "Hexagon";
	UseEnumeration::octagon = "Octagon";
}

UseEnumeration::~UseEnumeration() {
}

string UseEnumeration::getEnumValue(e_shape input) {
	string returnValue = "";

	switch (input) {
	case ConicSection:
		returnValue = this->conicSection;
		break;
	case Circle:
		returnValue = this->circle;
		break;
	case Ellipse:
		returnValue = this->ellipse;
		break;
	case Parabola:
		returnValue = this->parabola;
		break;
	case Polygon:
		returnValue = this->polygon;
		break;
	case Triangle:
		returnValue = this->triangle;
		break;
	case Equilateral:
		returnValue = this->equilateral;
		break;
	case Isosceles:
		returnValue = this->isosceles;
		break;
	case Obtuse:
		returnValue = this->obtuse;
		break;
	case Acute:
		returnValue = this->acute;
		break;
	case Scalene:
		returnValue = this->scalene;
		break;
	case Quadrilateral:
		returnValue = this->quadrilateral;
		break;
	case Rectangle:
		returnValue = this->rectangle;
		break;
	case Square:
		returnValue = this->square;
		break;
	case Rhombus:
		returnValue = this->rhombus;
		break;
	case Trapezoid:
		returnValue = this->trapezoid;
		break;
	case Pentagon:
		returnValue = this->pentagon;
		break;
	case Hexagon:
		returnValue = this->hexagon;
		break;
	case Octagon:
		returnValue = this->octagon;
		break;
	}
	return (returnValue);
}

} /* namespace gitux */
