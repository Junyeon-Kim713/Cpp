#include <iostream>
using namespace std;

void get_X(int* ptr);
void f(int x);
int main()
{
	int x;
	get_X(&x);
	f(x);
	return 0;
}
void get_X(int* ptr)
{
	cout << "정수 x를 입력하시오 :";
	cin >> *ptr;
}
void f(int x)
{
	cout << "x = " << x << "일때 y의 값은 " << x * x + 2 * x - 5 << "입니다." << endl;
}