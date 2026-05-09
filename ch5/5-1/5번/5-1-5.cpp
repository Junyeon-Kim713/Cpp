// Title : string 객체 배열을 인자로 전달해 사전편찬순서 상 가장 뒤에 나오는 문자열을 찾는 프로그램
// Author : 김준연
// Date : 26.05.09

#include <iostream>
#include <string>
using namespace std;
string GetMaxString(string* str);
int main() {
	string names[5];
	string res;
	for (int i = 0; i < 5; i++) {
		cout << "이름 >> ";
		getline(cin, names[i], '\n');
	}
	res = GetMaxString(names);
	cout << "사전에서 가장 뒤에 나오는 문자열은 " << res << endl;
}
string GetMaxString(string* str)
{
	string* max = str;
	for (int i = 1; i < 5; i++)
	{
		if (*max < str[i])
			max = &str[i];
	}
	return *max;
}