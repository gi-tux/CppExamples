/*
 * UseDeque.cpp
 *
 *  Created on: Oct 12, 2015
 *      Author: kelly
 */

#include <iostream>

#include "UseDeque.h"

namespace gitux {

UseDeque::UseDeque() :
	myDeque() {
	// TODO Auto-generated constructor stub
	std::cout << "UseDeque constructor" << std::endl;
}

UseDeque::~UseDeque() {
	// TODO Auto-generated destructor stub
}

//void UseDeque::insert(int position, Shape* newShape) {
//	myDeque.insert(myDeque.begin() + position, *newShape, 1);
//}

void UseDeque::display() {
	deque<Shape*>::iterator p;
	for (p = myDeque.begin(); p != myDeque.end(); ++p) {
		cout << "Area of " << (*p)->getShapeType() << " is " << (*p)->getArea() << endl;
	}
}

void UseDeque::push(Shape* newShape, end which) {
	switch (which) {
	case back:
		myDeque.push_back(newShape);
		break;
	case front:
		myDeque.push_front(newShape);
		break;
	}
}

Shape* UseDeque::pop(end which) {
	Shape* returnValue;
	switch (which) {
	case back:
		returnValue =  myDeque.back();
		myDeque.pop_back();
		break;
	case front:
		returnValue = myDeque.front();
		myDeque.pop_front();
		break;
	}
	return (returnValue);
}

} /* namespace gitux */
