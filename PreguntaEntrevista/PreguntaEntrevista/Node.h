#pragma once
#include <string>

class Node
{
public:
	std::string value;
	Node * next;
	Node();
	~Node();
};

