// Title : 참조에 의한 호출로 메인 함수의 지역 변수의 값을 변경하는 프로그램
// Author : 김준연
// Date : 26.05.10

#include<iostream>
using namespace std;
void add2(int& value);
int main(void)
{
	int number;
	cout << "정수를 입력하세요 : ";
	cin >> number;
	add2(number);
	cout << "2만큼 증가한 값 :" << number << endl;
	return 0;
}
void add2(int& value)
{
	value += 2;
}
