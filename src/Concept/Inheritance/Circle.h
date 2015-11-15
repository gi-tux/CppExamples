/*
 * Circle.h
 *
 *  Created on: Sep 26, 2015
 *      Author: kelly
 */

#ifndef SRC_CONCEPT_INHERITANCE_CIRCLE_H_
#define SRC_CONCEPT_INHERITANCE_CIRCLE_H_

#define _USE_MATH_DEFINES

#include <math.h>

#include "../../Concept/Inheritance/Shape.h"

namespace gitux {

class Circle: public Shape {
public:
	Circle();
	Circle(Circle *old);
	Circle(Shape *old);
	Circle(double newRadius);
	virtual ~Circle();

	virtual double getArea();

	bool isCircle();
};

} /* namespace gitux */

#endif /* SRC_CONCEPT_INHERITANCE_CIRCLE_H_ */
