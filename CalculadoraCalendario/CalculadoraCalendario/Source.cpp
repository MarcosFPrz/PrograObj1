#include <iostream>
#include "Contador.h"

long float segundos;

void Suma(int dia, int año, int mes, long int segundos)
{
	int firstMonth, lastMonth;
	int firstYear;
	int cont;
	int minutes = 0;
	int hrs;

	firstMonth = mes;
	firstYear = año;
	cont = segundos / 60;
	segundos %= 60;
	minutes += cont;

	hrs = 0;
	cont = minutes / 60;
	minutes %= 60;
	hrs += cont;
	cont = hrs / 24;
	hrs %= 24;

	dia += cont;
	cont = dia / 30;
	dia %= 30;
	mes += cont;

	cont = mes / 12;
	mes %= 12;

	año += cont;
	lastMonth = mes;

	if (lastMonth > firstMonth)
	{
		cont = lastMonth - firstMonth;
		cont /= 2;
		dia -= cont;
	}
	else if (firstMonth > lastMonth)
	{
		cont = firstMonth - lastMonth;
		cont /= 2;
		dia -= cont;
	}
	else if (lastMonth == firstMonth && firstYear != año)
		dia -= 5;

	std::cout << dia << "/ " << mes << "/ " << año << " - " << hrs << " : " << minutes << " : " << segundos << std::endl;
}

int main() 
{
	int dia, mes, año, segundos;
	std::cout << "Introduce un dia: ";
	std::cin >> dia;
	std::cout << "Introduce un mes: ";
	std::cin >> mes;
	std::cout << "Introduce un año: ";
	std::cin >> año;
	std::cout << "Segundos a sumar: ";
	std::cin >> segundos;
	
	Suma(dia, mes, año, segundos);

	system("Pause");
}