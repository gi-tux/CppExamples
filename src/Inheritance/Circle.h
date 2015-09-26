/*
 * Circle.h
 *
 *  Created on: Sep 26, 2015
 *      Author: kelly
 */

#ifndef SRC_INHERITANCE_CIRCLE_H_
#define SRC_INHERITANCE_CIRCLE_H_

#define _USE_MATH_DEFINES

#include <math.h>

#include "Shape.h"

namespace gitux {

class Circle: public Shape {
public:
	Circle();
	Circle(double newRadius);
	virtual ~Circle();

	virtual double calculateArea();

	bool isCircle();
};

} /* namespace gitux */

#endif /* SRC_INHERITANCE_CIRCLE_H_ */