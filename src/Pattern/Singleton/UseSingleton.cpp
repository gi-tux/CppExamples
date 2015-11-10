/*
 * UseSingleton.cpp
 *
 *  Created on: Nov 9, 2015
 *      Author: kelly
 */

#include <iostream>

#include "UseSingleton.h"

namespace gitux {

using namespace std;

UseSingleton::UseSingleton() :
	myCircle(),
	myRectangle(),
	myTriangle() {
}

UseSingleton::~UseSingleton() {
	delete myCircle;
	delete myRectangle;
	delete myTriangle;
}

Shape* UseSingleton::getCircle3() {
	if (myCircle == NULL) {
		myCircle = new Circle(3);
		cout << "Created a circle with radius of 3" << endl;
	}
	cout << "Retrieved a circle with radius of 3" << endl;
	return(myCircle);
}

Shape* UseSingleton::getRectangle34() {
	if (myRectangle == NULL) {
		myRectangle = new Rectangle(3, 4);
		cout << "Created a rectangle with a width of 3 and height of 4" << endl;
	}
	cout << "Retrieved a rectangle with a width of 3 and height of 4" << endl;
	return(myRectangle);
}

Shape* UseSingleton::getTriangle34() {
	if (myTriangle == NULL) {
		myTriangle = new Triangle(3, 4);
		cout << "Created a triangle with a width of 3 and height of 4" << endl;
	}
	cout << "Retrieved a triangle with a width of 3 and height of 4" << endl;
	return(myTriangle);
}

} /* namespace gitux */
