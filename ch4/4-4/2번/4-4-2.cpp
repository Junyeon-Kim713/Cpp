#include <iostream>
#include <string>
using namespace std;

int main()
{
	string result;
	int i=1;
	while (true)
	{
		string str;
		cout << "문자열 입력: ";
		cin >> str;
		if (str == "quit")
			break; 
		result += '<' + to_string(i) + '>' + str;
		cout << "이어진 문자열: " << result << endl;
		i++;
	}
	return 0;
}