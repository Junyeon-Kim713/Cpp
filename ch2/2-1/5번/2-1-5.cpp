#include <iostream>
using namespace std;

int main()
{
	for (int n = 0; n < 4; n++)
	{
		int j = 0;
		while (j < n + 1)
		{
			cout << '*';
			j++;
		}
		cout << '\n';
	}
	return 0;
}