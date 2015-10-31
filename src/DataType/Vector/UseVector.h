/*
 * UseVector.h
 *
 *  Created on: Oct 3, 2015
 *      Author: kelly
 */

#ifndef SRC_DATATYPE_VECTOR_USEVECTOR_H_
#define SRC_DATATYPE_VECTOR_USEVECTOR_H_

#include <vector>

#include "../../Concept/Inheritance/UseInheritance.h"

namespace gitux {

class UseVector {
public:
	UseVector();
	virtual ~UseVector();

	void pushBackVector(Shape *element);
	void printVector();
private:
	void printElement(Circle *element);
	void printElement(Rectangle *element);
	void printElement(Triangle *element);
	void printElement(Shape *element);

	std::vector<Shape*> *shapeVector;
};

} /* namespace gitux */

#endif /* SRC_DATATYPE_VECTOR_USEVECTOR_H_ */
