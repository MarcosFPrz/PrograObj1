#include "DLList.h"
#include <iostream>

DLList::DLList() : _pHead(NULL), _pTail(NULL)
{}

void DLList::insert(const int & v)
{
	Node * nuevo = new Node();
	nuevo->value = v;
	if (_pTail == NULL)
	{ //Caso 2
		_pHead = _pTail = nuevo;
	}
	else
	{
		nuevo->prev = _pTail;
		_pTail->next = nuevo;
		_pTail = nuevo;
	}
}

void DLList::DeleteAll()
{
	if (_pHead == NULL)
		return;

	while (_pHead)
	{
		Node * pTemp = _pHead->next;
		delete _pHead;
		_pHead = pTemp;
	}

	//Si pHead == NULL entonces salimos
	//creo temp "pTemp"
	//pTemp = _pHead -> next
	//borras pHead
	//pHead = pTemp
}

DLList::~DLList()
{
}

void DLList::Delete(const int & _v)
{
	if (_pHead == nullptr) return;
	Node* ptemp = _pHead;
	for (int i = 0; i < _v && ptemp != nullptr; ++i)
	{
		ptemp = ptemp->next;
	}
	if (ptemp == nullptr) return;
	if (ptemp->next != nullptr)
		ptemp->next->prev = ptemp->prev;
	if (ptemp->prev != nullptr)
		ptemp->prev->next = ptemp->next;
	delete ptemp;

}

void DLList::Print()
{
	Node* pTemp = _pHead;
	while (pTemp != nullptr)
	{
		std::cout << pTemp->value << std::endl;
		pTemp = pTemp->next;
	}

}

void main()
{
	DLList I;
	I.insert(7);
	I.insert(8);
	I.insert(15);
	I.Delete(2);
	I.Print();
	I.DeleteAll(); 
	getchar();
}
