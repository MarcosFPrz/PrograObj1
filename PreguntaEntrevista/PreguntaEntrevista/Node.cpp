#include "Node.h"
#include <string>
#include <iostream>

Node * pHead = NULL;

Node::Node()
{

}


Node::~Node()
{

}


void insert(const std::string & v)
{
	Node * pTemp = new Node;
	pTemp -> value = v;
	pTemp -> next = pHead;
	pHead = pTemp;
}

void reverseList(Node ** pHead)
{
	Node * head = NULL;
	Node * temp = NULL;

	while (*pHead != NULL)
	{
		temp = *pHead;
		*pHead = (*pHead)->next;
		temp->next = head;
		head = temp;
	}

	*pHead = head;
}

void print()
{
	Node *head = pHead;
	while (head != NULL)
	{
		std::cout << head->value << std::endl;
		head = head->next;
	}
}

void main()
{
	insert("1");
	insert("2");
	insert("3");
	insert("4");
	insert("5");

	reverseList(&pHead);
	print();

	system("PAUSE");
}
