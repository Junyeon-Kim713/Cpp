// Title : 주소에 의한 호출로 string 객체의 문자열을 교환하는 프로그램
// Author : 김준연
// Date : 26.05.09

#include <iostream>
#include <string>
using namespace std;

void SwapString(string* s1, string* s2);
int main() {
	string s1("hello");
	string s2("world");
	cout << "호출전 s1 : " << s1 << ", s2 : " << s2 << endl;
	SwapString(&s1, &s2); 
	cout << "호출후 s1 : " << s1 << ", s2 : " << s2 << endl;
}
void SwapString(string* s1, string* s2)
{
	string temp;
	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}