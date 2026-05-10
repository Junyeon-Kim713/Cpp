// Title : 참조에 의한 호출로 메인함수의 두 지역 변수의 값을 교환하는 프로그램
// Author : 김준연
// Date : 26.05.10

#include <iostream>
using namespace std;
void swap(int& a, int& b);
int main() {
	int x, y;
	cout << "정수 x를 입력하시오: ";
	cin >> x;
	cout << "정수 y를 입력하시오: ";
	cin >> y;
	cout << "swap함수 호출 전 x = " << x << ", y = " << y << endl;
	swap(x, y);
	cout << "swap함수 호출 후 x = " << x << ", y = " << y << endl;
	return 0;
}
void swap(int& a, int& b) { 
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
