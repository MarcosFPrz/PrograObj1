#include <iostream>
#include <string>

int main()
{
	std::string palabra;

	int cont = 1;

	std::cin >> palabra;

	int largo = palabra.length();

	for (int i = 0; i < largo; i++)
	{
		if (palabra[i] >= 65 && palabra[i] <= 90)
			cont++;
	}

	std::cout << cont << std::endl;

	system("PAUSE");

	return 0;
}

