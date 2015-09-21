/*
 * UseEnumeration.h
 *
 *  Created on: Sep 21, 2015
 *      Author: kfulks
 */

#ifndef SRC_ENUMERATION_USEENUMERATION_H_
#define SRC_ENUMERATION_USEENUMERATION_H_

namespace gitux {

class UseEnumeration {
public:
	UseEnumeration();
	virtual ~UseEnumeration();

	enum e_acompany {
		Audi,
		BMW,
		Cadillac,
		Chevrolet,
		Chrysler,
		Dodge,
		Ford,
		Jaguar,
		Jeep,
		Lexus,
		RollsRoyce,
		Saab,
		Volvo
	};

	std::string getEnumValue(e_acompany);

private:
	const std::string audi = "Audi";
	const std::string bmw = "BMW";
	const std::string cadillac = "Cadillac";
	const std::string chevrolet = "Chevrolet";
	const std::string dodge = "Dodge";
	const std::string ford = "Ford";
	const std::string jaguar = "Jaguar";
	const std::string jeep = "Jeep";
	const std::string lexus = "Lexus";
	const std::string rollsroyce = "Rolls Royce";
	const std::string saab = "Saab";
	const std::string volvo = "Volvo";
};

} /* namespace gitux */

#endif /* SRC_ENUMERATION_USEENUMERATION_H_ */
