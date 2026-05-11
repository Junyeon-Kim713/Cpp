// Title : 참조에 의한 호출로 전달받은 string 객체들의 문자열을 교환하는 프로그램
// Author : 김준연
// Date : 26.05.11

#include <iostream>
#include <string>
using namespace std;
void SwapString(string& refs1, string& refs2);
int main() {
	string s1("hello");
	string s2("world");
	cout << "교환전 문자열" << s1 << ' ' << s2 << endl;
	SwapString(s1, s2);
	cout << "교환후 문자열" << s1 << ' ' << s2 << endl;
	return 0;
}
void SwapString(string& refs1, string& refs2)
{
	string temp;
	temp = refs1;
	refs1 = refs2;
	refs2 = temp;
}
