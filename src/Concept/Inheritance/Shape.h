/*
 * Shape.h
 *
 *  Created on: Sep 25, 2015
 *      Author: kelly
 */

#ifndef SRC_CONCEPT_INHERITANCE_SHAPE_H_
#define SRC_CONCEPT_INHERITANCE_SHAPE_H_

#include "../../DataType/Enumeration/UseEnumeration.h"

namespace gitux {

using namespace std;

class Shape {
public:
	virtual ~Shape();

	void setHeight(double value);
	double getHeight();
	void setWidth(double value);
	double getWidth();
	void setRadius(double value);
	double getRadius();
	string getShapeType();

	virtual double getArea() = 0;

protected:
	Shape();
	Shape(Shape*);

	double height;
	double width;
	double radius;
	UseEnumeration::e_shape shapeType;
};

} /* namespace gitux */

#endif /* SRC_CONCEPT_INHERITANCE_SHAPE_H_ */
