// Title : 접근지시자와 setter함수, getter함수를 통해 캡슐화를 구현한 프로그램
// Author : 김준연
// Date : 26.03.26

#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setR(int r);
	int getR();
};
Circle::Circle() : Circle(1) {}
Circle::Circle(int r) {  
	if (r <= 0)
	{
		cout << "양수를 입력하시오" << endl; // 0이나 음수 입력 시 오류 문구 출력
	}
	else
		radius = r;
}
Circle::~Circle() {}
void Circle::setR(int r)
{
	radius = r;
}
int Circle::getR()
{
	return radius;
}

int main()
{
	Circle waffle;
	waffle.setR(5);
	cout << "원의 반지름은 " << waffle.getR() << endl;
	return 0;
}