#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (i + j == 6 || i == j)
				cout << '*';
			else
				cout << ' ';
		}
		cout << '\n';
	}
	return 0;
}