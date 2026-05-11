// Title : 참조 리턴을 이용해 연속해서 멤버변수를 호출하는 프로그램
// Author : 김준연  
// Date : 26.05.11

#include <iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle(int radius) { this->radius = radius; }
	Circle& plus(int n) {
		radius += n;
		return *this;
	}
	Circle& minus(int n) {
		radius -= n;
		return *this;
	}
	int getRadius()
	{
		return radius;
	}
};
int main() {
	Circle a(5);
	a.plus(1).plus(2).plus(3).minus(3).minus(2).minus(1).minus(5);
	cout << "객체 a의 반지름은 " << a.getRadius();
	return 0;
}
