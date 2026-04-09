// Title : 움직이기위한 포인터를 선언해 반복문에서 증가연산자를 통해 배열에 접근하는 프로그램
// Author : 김준연
// Date : 26.04.09

#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::Circle() {
	radius = 1; cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r; cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}
int main() {
	Circle* pArray = new Circle[3];
	Circle* p = pArray;
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << '\n';
		p++;
	}
	delete[] pArray;
	return 0;
}