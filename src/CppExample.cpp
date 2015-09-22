/*
 * CppExample.cpp
 *
 *  Created on: Sep 19, 2015
 *      Author: kelly
 */


#include <iostream>

#include "UseEnumeration.h"

using namespace std;
using namespace gitux;

static void EnumerationExample() {
	UseEnumeration *enumEx = new UseEnumeration();
	delete enumEx;
}

int main() {
	cout << "Hello, world!" << endl;
	cout << "=====" << endl << endl;

	EnumerationExample();
	cout << "=====" << endl << endl;

}
