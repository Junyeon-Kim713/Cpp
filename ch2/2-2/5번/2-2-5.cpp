#include <iostream>
using namespace std;

int main()
{
	char text[100];

	cout << "빈칸 없이 문자열을 입력하세요>> ";
	cin >> text;

	int i = 0;
	while (text[i] != '\0')
	{
		cout << text[i] << ' ';
		i++;
	}
	return 0;
}