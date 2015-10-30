/*
 * TriangleBuilder.h
 *
 *  Created on: Oct 29, 2015
 *      Author: kelly
 */

#ifndef SRC_PATTERN_BUILDER_TRIANGLEBUILDER_H_
#define SRC_PATTERN_BUILDER_TRIANGLEBUILDER_H_

#include "ShapeBuilder.h"

namespace gitux {

class TriangleBuilder: public ShapeBuilder {
public:
	TriangleBuilder();
	virtual ~TriangleBuilder();

	virtual void createShape();
	virtual void setWidth();
	virtual void setHeight();
};

} /* namespace gitux */

#endif /* SRC_PATTERN_BUILDER_TRIANGLEBUILDER_H_ */
