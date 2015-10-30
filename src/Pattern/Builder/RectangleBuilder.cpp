/*
 * RectangleBuilder.cpp
 *
 *  Created on: Oct 29, 2015
 *      Author: kelly
 */

#include "RectangleBuilder.h"

namespace gitux {

RectangleBuilder::RectangleBuilder() {
	// TODO Auto-generated constructor stub

}

RectangleBuilder::~RectangleBuilder() {
	// TODO Auto-generated destructor stub
}

void RectangleBuilder::createShape() {
	myShape = new Rectangle();
}

void RectangleBuilder::setHeight() {
	myShape->setHeight(4.0);
}

void RectangleBuilder::setWidth() {
	myShape->setWidth(3.0);
}

} /* namespace gitux */
