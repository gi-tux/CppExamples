/*
 * UseEnumeration.cpp
 *
 *  Created on: Sep 21, 2015
 *      Author: kfulks
 */

#include "UseEnumeration.h"

namespace gitux {

UseEnumeration::UseEnumeration() {
	// TODO Auto-generated constructor stub
	e_acompany myCar = Ford;
	std::cout << this->getEnumValue(myCar) << std::endl;
}

UseEnumeration::~UseEnumeration() {
	// TODO Auto-generated destructor stub
}

std::string UseEnumeration::getEnumValue(e_acompany input) {
	std::string returnValue = "a";
	switch (input) {
	case e_acompany::Audi:
		returnValue = this->audi;
		break;
	case e_acompany::BMW:
		returnValue = this->bmw;
		break;
	case e_acompany::Cadillac:
		returnValue = this->cadillac;
		break;
	case e_acompany::Chevrolet:
		returnValue = this->chevrolet;
		break;
	case e_acompany::Chrysler:
		returnValue = this->Chrysler;
		break;
	case e_acompany::Dodge:
		returnValue = this->dodge;
		break;
	case e_acompany::Ford:
		returnValue = this->ford;
		break;
	case e_acompany::Jaguar:
		returnValue = this->jaguar;
		break;
	case e_acompany::Jeep:
		returnValue = this->jeep;
		break;
	case e_acompany::Lexus:
		returnValue = this->lexus;
		break;
	case e_acompany::RollsRoyce:
		returnValue = this->rollsroyce;
		break;
	case e_acompany::Saab:
		returnValue = this->saab;
		break;
	case e_acompany::Volvo:
		returnValue = this->volvo;
		break;
	}
	return returnValue;
}

} /* namespace gitux */
