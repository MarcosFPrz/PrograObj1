#include <iostream>
#include <vector>

std::vector<int> BinarySearch;

int busquedaBinaria(const std::vector<int>& v, const int numero) 
{

	int ls = v.size() - 1;
	int li = 0;

	int buscaNum = (ls - li) / 2;
	
	while (ls >= li) 
	{
		if (v.at(buscaNum) == numero) 
		{
			std::cout << "La posicion del numero que buscas es : " << buscaNum;
			return buscaNum;
		}

		if (numero > v.at(buscaNum)) 
		{
			li = buscaNum;
			int temp = (ls - li) / 2;
			buscaNum = temp + li;
			if (temp == 0) 
			{
				buscaNum += 1;
			}
			else if (temp == 2) 
			{
				buscaNum -= 1;
			}
		}
		else 
		{
			ls = buscaNum;
			buscaNum = (ls - li) / 2 - li;
		}
		if (buscaNum < 0) 
		{
			std::cout << "El numero que buscas no existe " << buscaNum;
			return -1;
		}

		else if (buscaNum > 7) 
		{
			std::cout << "El numero que buscas no existe " << buscaNum;
			return -1;
		}

	}
	return -1;
}

void main() 
{
	int num;
	std::cout << "¿Que numero buscas?" << std::endl;
	std::cin >> num;

	BinarySearch.push_back(1);
	BinarySearch.push_back(2);
	BinarySearch.push_back(9);
	BinarySearch.push_back(13);
	BinarySearch.push_back(20);
	BinarySearch.push_back(24);
	BinarySearch.push_back(27);
	BinarySearch.push_back(50);

	busquedaBinaria(BinarySearch, num);
	
	std::cout << std::endl;
	
	system("Pause");
}