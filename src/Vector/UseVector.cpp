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
	vector<Shape*>::iterator vectorIterator;
	for (vectorIterator = shapeVector->begin(); vectorIterator < shapeVector->end(); vectorIterator++) {
		delete (*vectorIterator);
	}
	delete shapeVector;
}

void UseVector::pushBackVector(Shape *element) {
	shapeVector->push_back(element);
}

void UseVector::printElement(Circle *element) {
	cout << "in printElement for circle" << endl;
}

void UseVector::printElement(Rectangle *element) {
	cout << "in printElement for rectangle" << endl;
}

void UseVector::printElement(Triangle *element) {
	cout << "in printElement for triangle" << endl;
}

void UseVector::printVector() {
	vector<Shape*>::iterator vectorIterator;
	Circle *circleElement;
	Rectangle *rectangleElement;
	Triangle *triangleElement;

	for (vectorIterator = shapeVector->begin(); vectorIterator < shapeVector->end(); vectorIterator++) {
		if ((*vectorIterator)->getShapeType() == "Circle") {
			circleElement = dynamic_cast<Circle*>((*vectorIterator));
			cout << "The circle has a area of " << (*vectorIterator)->getArea() << endl;;
			cout << "The circleElement has an area of " << circleElement->getArea() << endl;
			this->printElement(circleElement);
		} else if ((*vectorIterator)->getShapeType() == "Rectangle") {
			rectangleElement = dynamic_cast<Rectangle*>((*vectorIterator));
			cout << "The rectangle has a area of " << (*vectorIterator)->getArea() << endl;
			cout << "The rectangleElement has an area of " << rectangleElement->getArea() << endl;
			this->printElement(rectangleElement);
		} else if ((*vectorIterator)->getShapeType() == "Triangle") {
			triangleElement = dynamic_cast<Triangle*>((*vectorIterator));
			cout << "The triangle has a area of " << (*vectorIterator)->getArea() << endl;
			cout << "The triangleElement has an area of " << triangleElement->getArea() << endl;
			this->printElement(triangleElement);
		}
	}
}

} /* namespace gitux */
