/*
 * ObjectReference2.h
 *
 *  Created on: Oct 16, 2015
 *      Author: kfulks
 */

#ifndef SRC_CONCEPT_REFERENCE_OBJECTREFERENCE2_H_
#define SRC_CONCEPT_REFERENCE_OBJECTREFERENCE2_H_

namespace gitux {

class ObjectReference2 {
public:
	ObjectReference2();
	virtual ~ObjectReference2();

	void SetReference(int&);
	void ChangeReference(int &);
	void PrintReference();
private:
	int *myRef;
};

} /* namespace gitux */

#endif /* SRC_CONCEPT_REFERENCE_OBJECTREFERENCE2_H_ */
