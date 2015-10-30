/*
 * UseFactory.cpp
 *
 *  Created on: Oct 1, 2015
 *      Author: kelly
 */

#include "../Pattern/Factory/UseFactory.h"

namespace gitux {

UseFactory::UseFactory() {
}

UseFactory::~UseFactory() {
}

Shape* UseFactory::makeShape(UseEnumeration::e_shape whichShape) {
	switch(whichShape) {
	case UseEnumeration::e_shape::Circle:
		return (new Circle());
		break;
	case UseEnumeration::e_shape::Rectangle:
		return (new Rectangle());
		break;
	case UseEnumeration::e_shape::Triangle:
		return (new Triangle());
		break;
	default:
		return (NULL);
		break;
	}
}
} /* namespace gitux */
