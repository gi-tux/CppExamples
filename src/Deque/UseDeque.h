/*
 * UseDeque.h
 *
 *  Created on: Oct 12, 2015
 *      Author: kelly
 */

#ifndef SRC_DEQUE_USEDEQUE_H_
#define SRC_DEQUE_USEDEQUE_H_

#include <deque>

#include "UseInheritance.h"

namespace gitux {

using namespace std;

class UseDeque {
public:
	enum end {
		front,
		back
	};

private:
	std::deque<Shape*> myDeque;

public:
	UseDeque();
	virtual ~UseDeque();

	void display(void);
	void push(Shape*, end);
	Shape* pop(end);
//	int size(void) const;
//	int maxsize(void) const;
//	bool empty(void) const;
//	void insert(int, Shape*);
//	void iterator(end);

private:
	static void print(int);
};

} /* namespace gitux */

#endif /* SRC_DEQUE_USEDEQUE_H_ */
