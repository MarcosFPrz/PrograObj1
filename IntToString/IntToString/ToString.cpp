#include <iostream>
#include <string>


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
	for (int i = palabranum.size(); i >= 0; i--)
	{
		std::cout << palabranum[i];
	}
	

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