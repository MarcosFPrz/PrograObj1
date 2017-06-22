#include "Contador.h"
#include <iostream>



void Contador::Suma(int dia, int a�o, int mes, long int segundos)
{
	int firstMonth, lastMonth;
	int firstYear;
	int cont;
	int minutes = 0;
	int horas;

	firstMonth = mes;
	firstYear = a�o;
	cont = segundos / 60;
	segundos %= 60;
	minutes += cont;

	horas = 0;
	cont = minutes / 60;
	minutes %= 60;
	horas += cont;
	cont = horas / 24;
	horas %= 24;

	dia += cont;
	cont = dia / 30;
	dia %= 30;
	mes += cont;

	cont = mes / 12;
	mes %= 12;
	
	a�o += cont;
	lastMonth = mes;

	if (lastMonth > firstMonth) 
	{
		cont = lastMonth - firstMonth;
		cont /= 2;
		dia -= cont;
	}
	else if(firstMonth > lastMonth)
	{
		cont = firstMonth - lastMonth;
		cont /= 2;
		dia -= cont;
	}
	else if (lastMonth == firstMonth && firstYear != a�o) 
		dia -= 5;

	std::cout << dia << "/ " << mes << "/ " << a�o << " - " << horas << " : " << minutes << " : " << segundos << std::endl;
}

Contador::Contador()
{
}


Contador::~Contador()
{
}
