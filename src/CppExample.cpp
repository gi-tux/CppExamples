/*
 * CppExample.cpp
 *
 *  Created on: Sep 19, 2015
 *      Author: kelly
 */


#include <iostream>

#include "UseEnumeration.h"
#include "UseInheritance.h"

using namespace std;
using namespace gitux;

static void EnumerationExample() {
	UseEnumeration *enumEx = new UseEnumeration();
	delete enumEx;
}

static void InheritanceExample() {
	string yesOrNo = "";

	Shape *circle = new Circle(2);
	cout << "Area of circle with a radius of " << circle->getRadius() << " is : " << circle->calculateArea() << endl;
	Circle *myCircle = dynamic_cast<Circle*>(circle);
	yesOrNo = myCircle->isCircle() ? "yes" : "no";
	cout << "Is this a circle? " << yesOrNo << endl;
}

int main() {
	cout << "Hello, world!" << endl;
	cout << "=====" << endl << endl;

	EnumerationExample();
	cout << "=====" << endl << endl;

	InheritanceExample();
	cout << "=====" << endl << endl;

}
