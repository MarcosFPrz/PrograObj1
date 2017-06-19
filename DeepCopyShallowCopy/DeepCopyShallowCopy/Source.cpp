#include <iostream>

class A
{
public:
	A();

	A(const A & a); //Deep Copy
	int * pi;
	A & operator = (const A & rhs);
	A shallowCopy(A* const& a)
	{
		this->pi = a->pi;
		return *this;
	}
};


A::A()
{
}

A::A(const A & a)
{
	pi = new int(*(a.pi));
}

A& A::operator= (const A & rhs)
{
	if (rhs.pi == NULL || &rhs == this)
		return *this;
	pi != NULL ? delete pi : NULL;
	pi = new int(*(rhs.pi));
	return *this;
}

int main()
{
	A a1;
	a1.pi = new int(5);
	A a2(a1);
	A a3;
	a3.pi = new int(6);
	a3 = a2;
	a3 = a3;
	a2.shallowCopy(&a3);
	getchar();
}

