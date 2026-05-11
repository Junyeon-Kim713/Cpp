// Title : 참조에 의한 호출로 전달받은 문자열을 대문자로 바꾸는 프로그램
// Author : 김준연
// Date : 26.05.11

#include <iostream>
#include <string>

using namespace std;
void Uppercase(string& str);
int main() {
	string s1("hello");
	cout << "변환전 문자열" << s1 << endl;
	Uppercase(s1);
	cout << "변환후 문자열" << s1 << endl;
	return 0;
}
void Uppercase(string& str)
{
	for(int i=0;i<str.length();i++)
		str[i] = toupper(str[i]);
}
