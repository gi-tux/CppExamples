/*
 * Shape.h
 *
 *  Created on: Sep 25, 2015
 *      Author: kelly
 */

#ifndef SRC_INHERITANCE_SHAPE_H_
#define SRC_INHERITANCE_SHAPE_H_

namespace gitux {

class Shape {
public:
	virtual ~Shape();

	void setHeight(double value);
	double getHeight();
	void setWidth(double value);
	double getWidth();
	void setRadius(double value);
	double getRadius();

	virtual double calculateArea() = 0;

protected:
	Shape();

	double height;
	double width;
	double radius;
};

} /* namespace gitux */

#endif /* SRC_INHERITANCE_SHAPE_H_ */
