#include <iostream>

unsigned long int BitCount(unsigned long int n)
{
	unsigned long int res = 0;
	while (n != 0)
	{
		if ((n & 1) == 0)
			++res;
		n = n >> 1;
	}
	res = pow(2, res);
	return res;
}

void main()
{
	unsigned long int n;
	std::cin >> n;
	std::cout << BitCount(n) << " : " << n << std::endl;

	system("Pause");
}