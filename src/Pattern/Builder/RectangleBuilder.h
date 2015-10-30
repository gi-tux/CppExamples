/*
 * RectangleBuilder.h
 *
 *  Created on: Oct 29, 2015
 *      Author: kelly
 */

#ifndef SRC_PATTERN_BUILDER_RECTANGLEBUILDER_H_
#define SRC_PATTERN_BUILDER_RECTANGLEBUILDER_H_

#include "ShapeBuilder.h"

namespace gitux {

class RectangleBuilder: public ShapeBuilder {
public:
	RectangleBuilder();
	virtual ~RectangleBuilder();

	virtual void createShape();
	virtual void setWidth();
	virtual void setHeight();
};

} /* namespace gitux */

#endif /* SRC_PATTERN_BUILDER_RECTANGLEBUILDER_H_ */
