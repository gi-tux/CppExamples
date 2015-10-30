/*
 * ShapeBuilder.cpp
 *
 *  Created on: Oct 29, 2015
 *      Author: kelly
 */

#include "ShapeBuilder.h"

namespace gitux {

ShapeBuilder::ShapeBuilder() {
	myShape = NULL;
}

ShapeBuilder::~ShapeBuilder() {
	delete myShape;
}

} /* namespace gitux */
