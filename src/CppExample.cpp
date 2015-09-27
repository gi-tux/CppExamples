/*
 * CppExample.cpp
 *
 *  Created on: Sep 19, 2015
 *      Author: kelly
 */


#include <iostream>
#include <string>

#include "Enumeration/UseEnumeration.h"
#include "Inheritance/UseInheritance.h"

using namespace std;
using namespace gitux;

static void enumerationExample() {
	UseEnumeration *enumEx = new UseEnumeration();
	cout << enumEx->getEnumValue(UseEnumeration::e_shape::Polygon) << endl;
	delete enumEx;
}

static void inheritanceExample() {
	string yesOrNo = "";

	Shape *circle = new Circle(2);
	cout << "Area of circle with a radius of " << circle->getRadius() << " is : "
			<< circle->getArea() << endl;
	Circle *myCircle = dynamic_cast<Circle*>(circle);
	yesOrNo = myCircle->isCircle() ? "yes" : "no";
	cout << "Is this a circle? " << yesOrNo << endl;
	cout << "Shape type is: " << circle->getShapeType() << endl;
	delete circle;
	cout << endl;

	Shape *rectangle = new Rectangle(2, 3);
	cout << "Area of rectangle with a width of " << rectangle->getWidth()
			<< " and a height of " << rectangle->getHeight()
			<< " is : " << rectangle->getArea() << endl;
	Rectangle *myRectangle = dynamic_cast<Rectangle*>(rectangle);
	yesOrNo = myRectangle->isRectangle() ? "yes" : "no";
	cout << "Is this a rectangle? " << yesOrNo << endl;
	yesOrNo = myRectangle->isSquare() ? "yes" : "no";
	cout << "Is this a square? " << yesOrNo << endl;
	cout << "Shape type is: " << rectangle->getShapeType() << endl;
	delete rectangle;
	cout << endl;

	Shape *triangle = new Triangle(2, 3);
	cout << "Area of triangle with a width of " << triangle->getWidth()
			<< " and a height of " << triangle->getHeight()
			<< " is : " << triangle->getArea() << endl;
	Triangle *myTriangle = dynamic_cast<Triangle*>(triangle);
	yesOrNo = myTriangle->isTriangle() ? "yes" : "no";
	cout << "Is this a triangle? " << yesOrNo << endl;
	cout << "Shape type is: " << triangle->getShapeType() << endl;
	delete triangle;
	cout << endl;
}

int main() {
	cout << "Hello, world!" << endl;
	cout << "=====" << endl << endl;

	enumerationExample();
	cout << "=====" << endl << endl;

	inheritanceExample();
	cout << "=====" << endl << endl;

}
