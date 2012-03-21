#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "cell.h"
#include "config.h"

class Queue
{
public:
	Queue() : start(0), end(0) {}
	void push(const Cell&);
	void pop();
	Cell& top();
	bool empty() const;

private:		
	Cell _cell[queue_len];	
	int _start;
	int _end;
};

#endif
