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
#include "Factory/UseFactory.h"
#include "Vector/UseVector.h"
#include "Deque/UseDeque.h"
#include "Reference/UseReference.h"

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
}

static void factoryExample() {
	Shape *circle = UseFactory::makeShape(UseEnumeration::e_shape::Circle);
	circle->setRadius(3);
	cout << "Area of circle with a radius of " << circle->getRadius() << " is : "
			<< circle->getArea() << endl;
	delete circle;

	Shape *rectangle = UseFactory::makeShape(UseEnumeration::e_shape::Rectangle);
	rectangle->setHeight(3);
	rectangle->setWidth(4);
	cout << "Area of rectangle with a width of " << rectangle->getWidth()
			<< " and a height of " << rectangle->getHeight()
			<< " is : " << rectangle->getArea() << endl;
	delete rectangle;
}

static void vectorExample() {
	UseVector *vector = new UseVector();
	Shape *circle = UseFactory::makeShape(UseEnumeration::e_shape::Circle);
	circle->setRadius(3);
	vector->pushBackVector(circle);
	Shape *rectangle = UseFactory::makeShape(UseEnumeration::e_shape::Rectangle);
	rectangle->setHeight(3);
	rectangle->setWidth(4);
	vector->pushBackVector(rectangle);
	Shape *triangle = UseFactory::makeShape(UseEnumeration::e_shape::Triangle);
	triangle->setHeight(3);
	triangle->setWidth(4);
	vector->pushBackVector(triangle);

	vector->printVector();
	delete vector;
}

static void dequeExample() {
	UseDeque myDeque;
	Shape *circle = new Circle(3);
	Shape *rectangle = new Rectangle(3, 4);
	Shape *triangle = new Triangle(3, 3);
	Shape *shape;
	string empty = myDeque.isEmpty() ? "true" : "false";

	cout << "myDeque is empty: " << empty << endl;
	cout << "The maximum size of myDeque is " << myDeque.maxsize() << endl;
	myDeque.push(circle, UseDeque::end::front);
	myDeque.push(rectangle, UseDeque::end::front);
	myDeque.push(triangle, UseDeque::end::back);
	cout << "myDeque has " << myDeque.size() << " entries." << endl;
	myDeque.display();
	shape = myDeque.pop(UseDeque::end::front);
	cout << "**The area of " << shape->getShapeType() << " is " << shape->getArea() << endl;
	shape = myDeque.pop(UseDeque::end::back);
	cout << "**The area of " << shape->getShapeType() << " is " << shape->getArea() << endl;
	cout << "The deque has " << myDeque.size() << " entries." << endl;
	myDeque.display();
	empty = myDeque.isEmpty() ? "true" : "false";
	cout << "myDeque is empty: " << empty << endl;
	myDeque.push(circle, UseDeque::end::front);
	myDeque.push(rectangle, UseDeque::end::front);
	myDeque.push(triangle, UseDeque::end::back);
	myDeque.insert(2, circle);

	deque<Shape*>::iterator iter = myDeque.iterator();
	deque<Shape*>::reverse_iterator riter = myDeque.riterator();
	cout << "Iterator shape type is " << (*iter)->getShapeType() << endl;
	cout << "Reverse Iterator shape type is " << (*riter)->getShapeType() << endl;
	myDeque.display();
}

static void referenceExample() {
	UseReference myReference;

	myReference.Reference2Pointer();
}

int main() {
	cout << "===== Hello, world! =====" << endl;
	cout << "Hello, world!" << endl;
	cout << "=====" << endl << endl;

	cout << "===== enumeration =====" << endl;
	enumerationExample();
	cout << "=====" << endl << endl;

	cout << "===== inheritance =====" << endl;
	inheritanceExample();
	cout << "=====" << endl << endl;

	cout << "===== factory =====" << endl;
	factoryExample();
	cout << "=====" << endl << endl;

	cout << "===== vector =====" << endl;
	vectorExample();
	cout << "=====" << endl << endl;

	cout << "===== deque =====" << endl;
	dequeExample();
	cout << "=====" << endl << endl;

	cout << "===== reference =====" << endl;
	referenceExample();
	cout << "=====" << endl << endl;
}
