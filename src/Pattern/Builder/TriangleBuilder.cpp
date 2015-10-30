/*
 * TriangleBuilder.cpp
 *
 *  Created on: Oct 29, 2015
 *      Author: kelly
 */

#include "TriangleBuilder.h"

namespace gitux {

TriangleBuilder::TriangleBuilder() {
	// TODO Auto-generated constructor stub

}

TriangleBuilder::~TriangleBuilder() {
	// TODO Auto-generated destructor stub
}

void TriangleBuilder::createShape() {
	myShape = new Triangle();
}

void TriangleBuilder::setHeight() {
	myShape->setHeight(4.0);
}

void TriangleBuilder::setWidth() {
	myShape->setWidth(3.0);
}

} /* namespace gitux */
