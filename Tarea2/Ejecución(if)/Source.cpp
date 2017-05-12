#include <iostream>

void main()
	{
		int a = 10;
		int b = 1;
		int c = 10;

		//La comprobación se ejecuta de izquierda a derecha, el “OR” se detiene cuando ambos casos son correctos y el “&” se detiene cuando todas las comprobaciones son correctos.
		
		if (a != 10 && b != 1 || a == 10 && c == 10) 
		{
			std::cout << "La comprobacion es correcta" << std::endl;
		}
		system("PAUSE");
	}