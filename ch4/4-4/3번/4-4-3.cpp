#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int len;
	int count = 0;

	cout << "문자열 입력: ";
	getline(cin, str, '\n');
	len = str.length();
	for (int i = 0; i < len; i++)
	{
		if (str.at(i) == 'a' || str.at(i) == 'A')
			count++;
	}
	cout << "문자 a는 " << count << "개 있습니다." << endl;
	return 0;
}