#include <iostream>

int main()
{
	int x;

	for (x = 0; x < 10; ++x)
	{
		std::cout << "Inicio de x = " << x << std::endl;
		std::cout << "Mas uno" << std::endl;
	}

	std::cout << "Valor final de x = " << x << std::endl;

	system("PAUSE");

	return 0;
}