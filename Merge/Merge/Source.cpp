#include <iostream>
#include <vector>

std::vector<int> vector1 = { 3,9,7 };
std::vector<int> vector2 = { 1,5,7,10 };
std::vector<int> Merge;

void merge(std::vector<int> Merge)
{
	int x = 0, y = 0;

	while (x < vector1.size() && y < vector2.size())
	{
		if (vector1[x] < vector2[y])
		{
			std::cout << vector1[x] << " , ";
			++x;
			;
		}

		else

		{
			std::cout << vector2[y] << " , ";
			++y;
		}
	}

	if (x == vector1.size())
	{
		while (y < vector2.size())
		{
			std::cout << vector2[y] << " , ";
			++y;
		}
	}

	else
	{
		while (x < vector1.size())
		{
			std::cout << vector1[x] << " , ";
			++x;
		}
	}
}

int main()
{
	merge(Merge);
	std::cout << "\n";
	system("PAUSE");
}