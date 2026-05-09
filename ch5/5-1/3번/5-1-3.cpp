// Title: 주소에 의한 호출로 객체의 주소를 전달해 사전 편찬 순서 상 뒤에 나오는 문자열을 찾는 프로그램
// Author : 김준연
// Date : 26.05.09

#include <iostream>
#include <string>
using namespace std;

string GetLatterString(string* s1, string* s2);
int main() {
	string s1("hello");
	string s2("world");
	string res;
	res = GetLatterString(&s1, &s2); 
	cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
}
string GetLatterString(string* s1, string* s2)
{
	if (*s1 > *s2)
		return *s1;
	else
		return *s2;
}