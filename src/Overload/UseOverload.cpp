/*
 * UseOverload.cpp
 *
 *  Created on: Oct 29, 2015
 *      Author: kelly
 */

#include <iostream>

#include "UseOverload.h"

namespace gitux {

using namespace std;

UseOverload::UseOverload() {
}

UseOverload::~UseOverload() {
}

void UseOverload::printNumber(int Input) {
	cout << "The number is : " << Input << endl;
}

void UseOverload::printNumber(double Input) {
	cout << "The number is : " << Input << endl;
}

} /* namespace gitux */
