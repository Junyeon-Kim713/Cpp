// Title : 반복해서 메모리를 동적할당 받고 객체를 생성해 작업을 수행하는 프로그램
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
	int radius;
	while (true) {
		cout << "반지름 입력(음수이면 종료)>> ";
		cin >> radius;
		if (radius < 0) break; 
		Circle* p = new Circle(radius);
		cout << "원의 면적:" << p->getArea() << endl;
		delete p; // 메모리 반환
	}
	return 0;
}