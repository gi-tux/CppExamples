/*
 * UseVector.cpp
 *
 *  Created on: Oct 3, 2015
 *      Author: kelly
 */

#include <iostream>

#include "UseVector.h"

namespace gitux {

using namespace std;

UseVector::UseVector() {
	shapeVector = new vector<Shape*>();
}

UseVector::~UseVector() {
}

void UseVector::pushBackVector(Shape *element) {
	shapeVector->push_back(element);
}

void printElement(Circle element) {

}

void printElement(Rectangle element) {

}

void printElement(Triangle element) {

}

void UseVector::printVector() {
	vector<Shape*>::iterator vectorIterator;
	//Circle circleElement;
	//Rectangle rectangleElement;
	//Triangle triangleElement;

	for (vectorIterator = shapeVector->begin(); vectorIterator < shapeVector->end(); vectorIterator++) {
		if ((*vectorIterator)->getShapeType() == "Circle") {
			cout << "The circle has a area of " << (*vectorIterator)->getArea() << endl;;
		} else if ((*vectorIterator)->getShapeType() == "Rectangle") {
			cout << "The rectangle has a area of " << (*vectorIterator)->getArea() << endl;
		} else if ((*vectorIterator)->getShapeType() == "Triangle") {
			cout << "The triangle has a area of " << (*vectorIterator)->getArea() << endl;
		}
	}
}

} /* namespace gitux */
