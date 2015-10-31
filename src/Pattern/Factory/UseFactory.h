/*
 * UseFactory.h
 *
 *  Created on: Oct 1, 2015
 *      Author: kelly
 */

#ifndef SRC_PATTERN_FACTORY_USEFACTORY_H_
#define SRC_PATTERN_FACTORY_USEFACTORY_H_

#include "../../Concept/Inheritance/UseInheritance.h"
#include "UseEnumeration.h"

namespace gitux {

class UseFactory {
public:
	static Shape* makeShape(UseEnumeration::e_shape);

private:
	UseFactory();
	virtual ~UseFactory();
};

} /* namespace gitux */

#endif /* SRC_PATTERN_FACTORY_USEFACTORY_H_ */
