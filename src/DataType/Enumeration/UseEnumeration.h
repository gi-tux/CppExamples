/*
 * UseEnumeration.h
 *
 *  Created on: Sep 21, 2015
 *      Author: kfulks
 */

#ifndef SRC_DATATYPE_ENUMERATION_USEENUMERATION_H_
#define SRC_DATATYPE_ENUMERATION_USEENUMERATION_H_

#include <string>

namespace gitux {

using namespace std;

class UseEnumeration {
public:
	UseEnumeration();
	virtual ~UseEnumeration();

	enum e_shape {
		ConicSection,
		Circle,
		Ellipse,
		Parabola,
		Polygon,
		Triangle,
		Equilateral,
		Isosceles,
		Obtuse,
		Acute,
		Scalene,
		Quadrilateral,
		Rectangle,
		Square,
		Rhombus,
		Trapezoid,
		Pentagon,
		Hexagon,
		Octagon
	};

	string getEnumValue(e_shape);

private:
	const string conicSection = "Conic Section";
	const string circle = "Circle";
	const string ellipse = "Ellipse";
	const string parabola = "Parabola";
	const string polygon = "Polygon";
	const string triangle = "Triangle";
	const string equilateral = "Equilateral";
	const string isosceles = "Isosceles";
	const string obtuse = "Obtuse";
	const string acute = "Acute";
	const string scalene = "Scalene";
	const string quadrilateral = "Quadrilateral";
	const string rectangle = "Rectangle";
	const string square = "Square";
	const string rhombus = "Rhombus";
	const string trapezoid = "Trapezoid";
	const string pentagon = "Pentagon";
	const string hexagon = "Hexagon";
	const string octagon = "Octagon";
};

} /* namespace gitux */

#endif /* SRC_DATATYPE_ENUMERATION_USEENUMERATION_H_ */
