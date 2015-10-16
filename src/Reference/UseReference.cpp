/*
 * UseReference.cpp
 *
 *  Created on: Oct 16, 2015
 *      Author: kfulks
 */

#include <iostream>

#include "UseReference.h"
#include "ObjectReference1.h"
#include "ObjectReference2.h"

namespace gitux {

using namespace std;

UseReference::UseReference() {
	// TODO Auto-generated constructor stub
	cout << "UseReference constructor" << endl;
}

UseReference::~UseReference() {
	// TODO Auto-generated destructor stub
	cout << "UseReference destructor" << endl;
}

void UseReference::Reference2Pointer() {
	cout << "** Pass a Variable by Reference in an alternate constructor and validate updates" << endl;
	int three = 3;
	ObjectReference1 myObjRef1a(three);

	myObjRef1a.PrintReference();
	three = 0;
	myObjRef1a.PrintReference();

	cout << "**" << endl;

	cout << "** Pass a Reference to two objects and validate updates" << endl;
	ObjectReference1 myObjRef1;
	ObjectReference2 myObjRef2;
	three = 3;

	myObjRef1.SetReference(three);
	myObjRef2.SetReference(three);
	myObjRef1.PrintReference();
	myObjRef2.PrintReference();

	myObjRef1.ChangeReference(three);
	myObjRef1.PrintReference();
	myObjRef2.PrintReference();
	myObjRef2.ChangeReference(three);
	myObjRef1.PrintReference();
	myObjRef2.PrintReference();

	cout << "**" << endl;

	cout << "** Pass a Pointer by Reference and validate updates" << endl;
	int *four = new int(4);

	myObjRef1.SetPointerReference(four);
	myObjRef1.PrintReference2();
	*four = 3;
	myObjRef1.PrintReference2();
	*four = NULL;
	myObjRef1.PrintReference2();
	cout << "**" << endl;
}

} /* namespace gitux */
