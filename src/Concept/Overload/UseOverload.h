/*
 * UseOverload.h
 *
 *  Created on: Oct 29, 2015
 *      Author: kelly
 */

#ifndef SRC_CONCEPT_OVERLOAD_USEOVERLOAD_H_
#define SRC_CONCEPT_OVERLOAD_USEOVERLOAD_H_

namespace gitux {

class UseOverload {
public:
	UseOverload();
	virtual ~UseOverload();

	void printNumber(int);
	void printNumber(double);
};

} /* namespace gitux */

#endif /* SRC_CONCEPT_OVERLOAD_USEOVERLOAD_H_ */
