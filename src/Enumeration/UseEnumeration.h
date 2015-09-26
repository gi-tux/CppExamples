/*
 * UseEnumeration.h
 *
 *  Created on: Sep 21, 2015
 *      Author: kfulks
 */

#ifndef SRC_ENUMERATION_USEENUMERATION_H_
#define SRC_ENUMERATION_USEENUMERATION_H_

namespace gitux {

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

	std::string getEnumValue(e_shape);

private:
	const std::string conicSection = "Conic Section";
	const std::string circle = "Circle";
	const std::string ellipse = "Ellipse";
	const std::string parabola = "Parabola";
	const std::string polygon = "Polygon";
	const std::string triangle = "Triangle";
	const std::string equilateral = "Equilateral";
	const std::string isosceles = "Isosceles";
	const std::string obtuse = "Obtuse";
	const std::string acute = "Acute";
	const std::string scalene = "Scalene";
	const std::string quadrilateral = "Quadrilateral";
	const std::string rectangle = "Rectangle";
	const std::string square = "Square";
	const std::string rhombus = "Rhombus";
	const std::string trapezoid = "Trapezoid";
	const std::string pentagon = "Pentagon";
	const std::string hexagon = "Hexagon";
	const std::string octagon = "Octagon";
};

} /* namespace gitux */

#endif /* SRC_ENUMERATION_USEENUMERATION_H_ */
