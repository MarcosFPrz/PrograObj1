#include <iostream>

char Texto[] = "amor a roma";

bool esPalindromo(char *Texto, int lenght)
{

int i = 0, j = lenght - 1;

while

(Texto[i] == Texto[j] && i++ < j--)
{
	if (Texto[i] == ' ') { ++i; }
	if (Texto[j] == ' ') { --j; }
}

return(i >= j) ? true : false;

}

void main()
{
	std::cout << esPalindromo(Texto, 11) << std::endl;
	system("PAUSE");
}