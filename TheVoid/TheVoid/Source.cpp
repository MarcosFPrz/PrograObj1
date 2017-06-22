#include <iostream>

int mult(const int & n1, const int& n2)
{
	int multi = 0;

	if (n1 == 0 || n2 == 0)
		std::cout << "El resultado es 0" << std::endl;

	if (n1 < 0) 
	{
		std::cout << "El resultado es " << (n1 * n2) << std::endl;
	}
	else if(n1 > 0)
		std::cout << "El resultado es " <<(n1 * n2) << std::endl;

	
	if (n2 < 0)
	{
		std::cout << "El resultado es " << (n1 * n2) << std::endl;
	}
	else if(n2 > 0)
		std::cout << "El resultado es " << (n1 * n2) << std::endl;

	return 0;

}

int main()
{
	int n1, n2;
	std::cout << "Introduce 2 numeros a multiplicar" << std::endl;
	std::cin >> n1;
	std::cin >> n2;
	mult(n1, n2);
	system("Pause");

}