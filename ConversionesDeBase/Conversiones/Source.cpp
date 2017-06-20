#include <iostream>


int Convertidor(int numero, int base) 
{
	int numero_base = 0, coef = 1;

	while (numero != 0) 
	{
		numero_base += coef*(numero%base);
		coef *= 10;
		numero /= base;
	}

	return numero_base;
}

int main() 
{
	int numero_;
	int base;

	std::cout << "Introduce un numero entero en base 10: " << std::endl;
	std::cin >> numero_; 
	std::cout << std::endl;
	std::cout << "Introduce la base a la que deseas convertir el numero:" << std::endl;
	std::cin >> base;
	std::cout << "El numero " << numero_ << " es igual al numero " << Convertidor(numero_, base) << " en base " << base << std::endl;

	system("PAUSE");
}