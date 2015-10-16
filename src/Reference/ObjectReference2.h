/*
 * ObjectReference2.h
 *
 *  Created on: Oct 16, 2015
 *      Author: kfulks
 */

#ifndef SRC_REFERENCE_OBJECTREFERENCE2_H_
#define SRC_REFERENCE_OBJECTREFERENCE2_H_

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

#endif /* SRC_REFERENCE_OBJECTREFERENCE2_H_ */
