// Title : 생성자와 소멸자를 가진 삼각형 클래스를 만들어 다양한 동작을 수행하는 프로그램
// Author : 김준연
// Date : 26.03.24

#include <iostream> 
using namespace std; 

class Triangle {
public:
	int width, height;
	Triangle();
	Triangle(int a, int b);
	~Triangle();
	double getArea();
};
Triangle::Triangle() : Triangle(1,1) {}
Triangle::Triangle(int a, int b) : width(a), height(b)
{
	cout << "밑변 " << width << "높이 " << height << "인 삼각형 생성" << endl;
}
Triangle::~Triangle() {
	cout << "밑변 " << width << "높이 " << height << "인 삼각형 소멸" << endl;
}
double Triangle::getArea() {
	return 0.5 * width * height;
}
int main() 
{
	Triangle tri1;
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
	Triangle tri2(2, 4); 
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	return 0;
}
