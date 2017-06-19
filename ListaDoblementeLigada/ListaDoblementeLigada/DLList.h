#pragma once
#include "Node.h"

class DLList
{
private:
	Node *_pHead,
		*_pTail;
public:
	void insert(const int & v);
	DLList();
	void DeleteAll();
	~DLList();
	void Delete(const int & _v);
	void Print();
};