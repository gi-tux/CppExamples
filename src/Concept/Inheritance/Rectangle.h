/*
 * Rectangle.h
 *
 *  Created on: Sep 26, 2015
 *      Author: kelly
 */

#ifndef SRC_CONCEPT_INHERITANCE_RECTANGLE_H_
#define SRC_CONCEPT_INHERITANCE_RECTANGLE_H_

#include "../../Concept/Inheritance/Shape.h"

namespace gitux {

class Rectangle: public Shape {
public:
	Rectangle();
	Rectangle(double newHeight, double newWidth);
	virtual ~Rectangle();

	virtual double getArea();

	bool isRectangle();
	bool isSquare();
};

} /* namespace gitux */

#endif /* SRC_CONCEPT_INHERITANCE_RECTANGLE_H_ */
