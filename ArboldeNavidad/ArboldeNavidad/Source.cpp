#include <iostream>

void luces(const int tamaño)
{
	for (int i = 1; i <= tamaño; ++i)
	{
		int luces = i;
		std::cout << std::endl;

		for (int j = tamaño; j >= luces; --j)
			std::cout <<" ";
		for (int k = 2; k <= luces; ++k)
			std::cout << "*";
		for (int l = 1; l <= luces; ++l)
			std::cout << "*";
	}


}
int main()
{
	int cantidadLuces;
	std::cout << "Introduce la cantidad de niveles que quieres en el Arbol" << std::endl;
	std::cin >> cantidadLuces;
	luces(cantidadLuces);
	std::cout << std::endl;
	system("PAUSE");
}