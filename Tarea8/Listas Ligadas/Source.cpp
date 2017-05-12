#include <iostream>
#include "Node.h"

Node * pHead = NULL;

void printList(const std::string & v)
{
	Node * pTemp = new Node();
	pTemp -> valve = v;
	pTemp->next = pHead;
	pHead = pTemp;
	std::cout << pTemp << std::endl;
}

void main()
{
	printList("a");
	printList("b");
	printList("c");

	system("PAUSE");
}

