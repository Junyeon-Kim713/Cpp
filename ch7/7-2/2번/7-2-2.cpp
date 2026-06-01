// Title : * 연산자 중복으로 복소수 객체의 *연산을 수행하는 프로그램
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
		if (img > 0)
			cout << real << '+' << img << 'i' << endl;
		else
			cout << real << img << 'i' << endl;
	}
	Complex  operator *(Complex& op2);

};
Complex Complex::operator *(Complex& op2) {
	Complex temp;
	temp.real = (this->real * op2.real) + (this->img * op2.img * -1);
	temp.img = (this->real * op2.img) + (this->img * op2.real);
	return temp;

}
int main() {
	Complex x(2, 3), y(-5, 10), sum;
	sum = x * y;
	cout << "두 복소수의 곱은";
	sum.show();
	return 0;
}
