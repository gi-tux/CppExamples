/*
 * UseSingleton.h
 *
 *  Created on: Nov 9, 2015
 *      Author: kelly
 */

#ifndef SRC_PATTERN_SINGLETON_USESINGLETON_H_
#define SRC_PATTERN_SINGLETON_USESINGLETON_H_

#include "../../Concept/Inheritance/UseInheritance.h"
namespace gitux {

class UseSingleton {
public:
	UseSingleton();
	virtual ~UseSingleton();

	Shape* getCircle3();
	Shape* getRectangle34();
	Shape* getTriangle34();

private:
	Circle* myCircle;
	Rectangle* myRectangle;
	Triangle* myTriangle;
};

} /* namespace gitux */

#endif /* SRC_PATTERN_SINGLETON_USESINGLETON_H_ */
