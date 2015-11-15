/*
 * Triangle.h
 *
 *  Created on: Sep 26, 2015
 *      Author: kelly
 */

#ifndef SRC_CONCEPT_INHERITANCE_TRIANGLE_H_
#define SRC_CONCEPT_INHERITANCE_TRIANGLE_H_

#include "../../Concept/Inheritance/Shape.h"

namespace gitux {

class Triangle: public Shape {
public:
	Triangle();
	Triangle(Triangle *old);
	Triangle(Shape *old);
	Triangle(double newHeight, double newWidth);
	virtual ~Triangle();

	virtual double getArea();

	bool isTriangle();
};

} /* namespace gitux */

#endif /* SRC_CONCEPT_INHERITANCE_TRIANGLE_H_ */
