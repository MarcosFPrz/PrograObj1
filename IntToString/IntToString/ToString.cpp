#include <iostream>
#include <string>
#include <algorithm>


void ToString(const int num)
{
	int temp = num;
	int temp2 = num;
	std::string palabranum;

	while (temp != NULL)
	{
		temp = temp % 10;
		if (temp <= 0)
		{
			temp *= -1;
		}
		temp += 48;
		palabranum += temp;
		temp2 = temp2 / 10;
		temp = temp2;
	}
	std::reverse(palabranum.begin(), palabranum.end());
	std::cout << palabranum;
	

}

int main()
{
	int num;
	std::cout << "Introduce numero a convertir" << std::endl;
	std::cin >> num;
	ToString(num);
	std::cout << std::endl;
	system("PAUSE");
}