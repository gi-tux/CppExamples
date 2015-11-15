/*
 * CppExample.cpp
 *
 *  Created on: Sep 19, 2015
 *      Author: kelly
 */


#include <iostream>
#include <string>

#include "Concept/Inheritance/UseInheritance.h"
#include "Concept/Overload/UseOverload.h"
#include "Concept/Reference/UseReference.h"
#include "DataType/Deque/UseDeque.h"
#include "DataType/Enumeration/UseEnumeration.h"
#include "DataType/Vector/UseVector.h"
#include "Pattern/Builder/UseBuilder.h"
#include "Pattern/Factory/UseFactory.h"
#include "Pattern/Singleton/UseSingleton.h"

using namespace std;
using namespace gitux;

// Concepts
static void inheritanceExample() {
	string yesOrNo = "";

	Shape *circle = new Circle(2);
	cout << "Area of circle with a radius of " << circle->getRadius() << " is : "
			<< circle->getArea() << endl;
	Circle *myCircle = dynamic_cast<Circle*>(circle);
	yesOrNo = myCircle->isCircle() ? "yes" : "no";
	cout << "Is this a circle? " << yesOrNo << endl;
	cout << "Shape type is: " << circle->getShapeType() << endl << endl;
	Shape *circle2 = new Circle(myCircle);
	cout << "Area of circle with a radius of " << circle->getRadius() << " is : "
			<< circle->getArea() << endl << endl;
	Shape *circle3 = new Circle(circle);
	cout << "Area of circle with a radius of " << circle3->getRadius() << " is : "
			<< circle3->getArea() << endl;
	delete circle3;
	delete circle2;
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
	cout << "Shape type is: " << rectangle->getShapeType() << endl << endl;
	Shape *rectangle2 = new Rectangle(myRectangle);
	cout << "Area of rectangle with a width of " << rectangle2->getWidth()
			<< " and a height of " << rectangle2->getHeight()
			<< " is : " << rectangle2->getArea() << endl << endl;
	Shape *rectangle3 = new Rectangle(rectangle);
	cout << "Area of rectangle with a width of " << rectangle3->getWidth()
			<< " and a height of " << rectangle3->getHeight()
			<< " is : " << rectangle3->getArea() << endl;
	delete rectangle3;
	delete rectangle2;
	delete rectangle;
	cout << endl;

	Shape *triangle = new Triangle(2, 3);
	cout << "Area of triangle with a width of " << triangle->getWidth()
			<< " and a height of " << triangle->getHeight()
			<< " is : " << triangle->getArea() << endl;
	Triangle *myTriangle = dynamic_cast<Triangle*>(triangle);
	yesOrNo = myTriangle->isTriangle() ? "yes" : "no";
	cout << "Is this a triangle? " << yesOrNo << endl;
	cout << "Shape type is: " << triangle->getShapeType() << endl << endl;
	Shape *triangle2 = new Triangle(myTriangle);
	cout << "Area of triangle with a width of " << triangle2->getWidth()
			<< " and a height of " << triangle2->getHeight()
			<< " is : " << triangle2->getArea() << endl << endl;
	Shape *triangle3 = new Triangle(triangle);
	cout << "Area of triangle with a width of " << triangle3->getWidth()
			<< " and a height of " << triangle3->getHeight()
			<< " is : " << triangle3->getArea() << endl;
	delete triangle3;
	delete triangle2;
	delete triangle;
}

static void overloadExample() {
	UseOverload myOverload;

	myOverload.printNumber(1);
	myOverload.printNumber(2.1);
}

static void referenceExample() {
	UseReference myReference;

	myReference.Reference2Pointer();
}

// Datatypes
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
	delete triangle;
	delete rectangle;
	delete circle;
}

static void enumerationExample() {
	UseEnumeration *enumEx = new UseEnumeration();
	cout << enumEx->getEnumValue(UseEnumeration::e_shape::Polygon) << endl;
	delete enumEx;
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

// Patterns
static void builderExample() {
	ShapeBuilder *myRectangleBuilder = new RectangleBuilder();
	myRectangleBuilder->createShape();
	myRectangleBuilder->setHeight();
	myRectangleBuilder->setWidth();
	Shape *myRectangle = myRectangleBuilder->getShape();
	cout << "Area of the Rectangle is: " << myRectangle->getArea() << endl;
	delete myRectangleBuilder;

	ShapeBuilder *myTriangleBuilder = new TriangleBuilder();
	myTriangleBuilder->createShape();
	myTriangleBuilder->setHeight();
	myTriangleBuilder->setWidth();
	Shape *myTriangle = myTriangleBuilder->getShape();
	cout << "Area of the Triangle is: " << myTriangle->getArea() << endl;
	delete myTriangleBuilder;
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

static void singletonExample() {
	UseSingleton *shapeSingleton = new UseSingleton();
	Shape *myCircle = shapeSingleton->getCircle3();
	Shape *myRectangle = shapeSingleton->getRectangle34();
	Shape *myTriangle = shapeSingleton->getTriangle34();
	Shape *myCircle2 = shapeSingleton->getCircle3();
	Shape *myRectangle2 = shapeSingleton->getRectangle34();
	Shape *myTriangle2 = shapeSingleton->getTriangle34();
	delete shapeSingleton;
}

// MAIN
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

	cout << "===== vector =====" << endl;
	vectorExample();
	cout << "=====" << endl << endl;

	cout << "===== deque =====" << endl;
	dequeExample();
	cout << "=====" << endl << endl;

	cout << "===== reference =====" << endl;
	referenceExample();
	cout << "=====" << endl << endl;

	cout << "===== overload =====" << endl;
	overloadExample();
	cout << "=====" << endl << endl;

	/* Design Pattern Examples */

	cout << "===== builder =====" << endl;
	builderExample();
	cout << "=====" << endl << endl;

	cout << "===== factory =====" << endl;
	factoryExample();
	cout << "=====" << endl << endl;

	cout << "===== singleton =====" << endl;
	singletonExample();
	cout << "=====" << endl << endl;
}
