#include "Node.h"
#include "DLList.h"
#include <iostream>

Node::Node() : prev(NULL), next(NULL)
{

}

Node::~Node()
{
}



//
//Caso 1 (Cuando ya hay elementos)
//Crear nuevo Node
//Pongo valor en nuevo
//prev del neuvo = _pTail
//_pTail next = nuevo
//_pTail apunta a nuevo
//
//Caso 2 (Cuando no hay elementos)
//Crear nuevo Nodo
//asignar nuevo Nodo a _pHead
//asignar nuevo Nodo a _pTail
