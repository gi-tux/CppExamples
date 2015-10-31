/*
 * ObjectReference1.cpp
 *
 *  Created on: Oct 16, 2015
 *      Author: kfulks
 */

#include "../../Concept/Reference/ObjectReference1.h"

#include <iostream>


namespace gitux {

using namespace std;

ObjectReference1::ObjectReference1() :
	myRef(),
	myRef2() {
	// TODO Auto-generated constructor stub
	cout << "ObjectReference1 constructor" << endl;
}

ObjectReference1::ObjectReference1(int &testRef) :
	myRef(),
	myRef2() {
	cout << "ObjectReference1 alternate constructor" << endl;
	myRef = &testRef;
}

ObjectReference1::~ObjectReference1() {
	// TODO Auto-generated destructor stub
	cout << "ObjectReference1 destructor" << endl;
}

void ObjectReference1::SetReference(int &testRef) {
	myRef = &testRef;
}

void ObjectReference1::SetPointerReference(int *&testRef) {
	myRef2 = testRef;
}

void ObjectReference1::ChangeReference(int &testRef) {
	testRef = 1;
}

void ObjectReference1::PrintReference() {
	cout << "ObjectReference1 value is " << *myRef << endl;
}

void ObjectReference1::PrintReference2() {
	cout << "ObjectReference1 value is " << *myRef2 << endl;
}

} /* namespace gitux */
