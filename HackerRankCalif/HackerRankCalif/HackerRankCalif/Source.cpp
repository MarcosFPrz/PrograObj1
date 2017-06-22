#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, calif;

	cin >> n;

	while (n-->0)
	{
		cin >> calif;
		if (calif >= 38 && calif % 5 > 2)
			calif += 5 - (calif % 5);
		cout << calif << '\n';
	}

	return 0;
}