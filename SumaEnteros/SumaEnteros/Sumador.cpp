#include <iostream>
#include <vector>

int suma, n1, n2;

void InsertaN1()
{
	suma = 0;
	std::cout << "Introduce 2 numeros a sumar" << std::endl;
	std::cin >> n1;
	std::cin >> n2;
	
	suma = n1 + n2;

	std::cout << "La suma es :" << suma << std::endl;

}

void InsertaN2()
{

	std::cout << "Introduce 2 numero a sumar : " << std::endl;
	std::cin >> n1;
	std::cin >> n2;

	std::cout << "el resultado de la suma es igual a " << n1 + n2 << std::endl;
}

int main()
{
	InsertaN1();
	InsertaN2();

	system("PAUSE");
}
