/*
 * ObjectReference1.h
 *
 *  Created on: Oct 16, 2015
 *      Author: kfulks
 */

#ifndef SRC_REFERENCE_OBJECTREFERENCE1_H_
#define SRC_REFERENCE_OBJECTREFERENCE1_H_

namespace gitux {

class ObjectReference1 {
public:
	ObjectReference1();
	ObjectReference1(int&);
	virtual ~ObjectReference1();

	void SetReference(int&);
	void ChangeReference(int &);
	void PrintReference();
	void SetPointerReference(int *&);
	void PrintReference2();
private:
	int *myRef;
	int *myRef2;
};

} /* namespace gitux */

#endif /* SRC_REFERENCE_OBJECTREFERENCE1_H_ */
