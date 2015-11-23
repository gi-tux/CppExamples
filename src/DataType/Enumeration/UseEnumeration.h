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
	string conicSection;
	string circle;
	string ellipse;
	string parabola;
	string polygon;
	string triangle;
	string equilateral;
	string isosceles;
	string obtuse;
	string acute;
	string scalene;
	string quadrilateral;
	string rectangle;
	string square;
	string rhombus;
	string trapezoid;
	string pentagon;
	string hexagon;
	string octagon;
};

} /* namespace gitux */

#endif /* SRC_DATATYPE_ENUMERATION_USEENUMERATION_H_ */
