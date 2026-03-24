// Title : 삼각형 클래스를 전역객체로 생성해 면적을 출력하는 프로그램
// Author : 김준연
// Date : 26.03.25

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
Triangle::Triangle() : Triangle(1, 1) {}
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
Triangle globalTri1(4, 8);
Triangle globalTri2(2, 2);
int main()
{
	cout << "삼각형의 면적은 " << globalTri1.getArea() << endl;
	cout << "삼각형의 면적은 " << globalTri2.getArea() << endl;
	return 0;
}