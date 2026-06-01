// Title : - 연산자 중복으로 복소수 객체의 -연산을 수행하는 프로그램
// Author : 김준연
// Date : 26.06.01

#include <iostream>
using namespace std;

class Complex {
	int real;
	int img;
public:
	Complex(int r = 0, int i = 0) : real(r), img(i) {}
	void show() {
		if (img >= 0)
			cout << real << '+' << img << 'i' << endl;
		else
			cout << real << img << 'i' << endl;
	}
	Complex operator -(int op2);

};
Complex Complex::operator -(int op2) {
	Complex temp = *this;
	temp.real = this->real - op2;
	return temp;
}
int main() {
	Complex a(3, 5), b;
	a.show();
	b.show();
	b = a - 2; 
	a.show();
	b.show();
	return 0;
}
