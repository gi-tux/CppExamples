/*
 * UseFactory.cpp
 *
 *  Created on: Oct 1, 2015
 *      Author: kelly
 */

#include "UseFactory.h"

namespace gitux {

UseFactory::UseFactory() {
}

UseFactory::~UseFactory() {
}

Shape* UseFactory::makeShape(UseEnumeration::e_shape whichShape) {
	switch(whichShape) {
	case UseEnumeration::Circle:
		return (new Circle());
		break;
	case UseEnumeration::Rectangle:
		return (new Rectangle());
		break;
	case UseEnumeration::Triangle:
		return (new Triangle());
		break;
	default:
		return (NULL);
		break;
	}
}
} /* namespace gitux */
