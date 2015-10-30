/*
 * ShapeBuilder.h
 *
 *  Created on: Oct 29, 2015
 *      Author: kelly
 */

#ifndef SRC_PATTERN_BUILDER_SHAPEBUILDER_H_
#define SRC_PATTERN_BUILDER_SHAPEBUILDER_H_

#include "UseInheritance.h"

namespace gitux {

class ShapeBuilder {
public:
	ShapeBuilder();
	virtual ~ShapeBuilder();

	Shape* getShape() {
		return (myShape);
	}

	virtual void createShape() = 0;
	virtual void setWidth() = 0;
	virtual void setHeight() = 0;

protected:
	Shape* myShape;
};

} /* namespace gitux */

#endif /* SRC_PATTERN_BUILDER_SHAPEBUILDER_H_ */
