/*
 * Triangle.h
 *
 *  Created on: Sep 26, 2015
 *      Author: kelly
 */

#ifndef SRC_INHERITANCE_TRIANGLE_H_
#define SRC_INHERITANCE_TRIANGLE_H_

#include "Shape.h"

namespace gitux {

class Triangle: public Shape {
public:
	Triangle();
	Triangle(double newHeight, double newWidth);
	virtual ~Triangle();

	virtual double getArea();

	bool isTriangle();
};

} /* namespace gitux */

#endif /* SRC_INHERITANCE_TRIANGLE_H_ */
