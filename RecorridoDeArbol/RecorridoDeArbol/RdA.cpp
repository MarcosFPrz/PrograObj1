#include "RdA.h"
#include <iostream>


void RdA::insert(const int & v)
{
	Node * nuevo = new Node();
	nuevo->value = v;
	if (root == NULL)
	{
		root = nuevo;
		return;
	}
	Node *pTemp = root;
	while ((pTemp->value < nuevo->value ? pTemp->r : pTemp->l) != NULL)
	{
		if (pTemp->value < nuevo->value)
		{
			pTemp = pTemp->r;

		}
		else
		{
			pTemp = pTemp->l;
		}
	}
	if (pTemp->value < nuevo->value)
	{
		pTemp->r = nuevo;
	}
	else pTemp->l = nuevo; 

}

void RdA::print(Node * v)
{
	if (v == NULL)
		return;
	print(v->l);
	std::cout << v->value << std::endl;
	print(v->r);

}

void main()
{
	RdA Rda;
	Rda.insert(10);
	Rda.insert(1);
	Rda.insert(5);
	Rda.insert(4);
	Rda.insert(2);
	Rda.insert(9);
	Rda.insert(6);
	Rda.print(Rda.root);
	getchar();
}