// Title : 모든 멤버변수를 private로 선언한 Triangle 클래스
// Author : 김준연
// Date : 26,03.26

#include <iostream>
using namespace std;

class Triangle {
private:
	int width, height;
public:
	Triangle();
	Triangle(int w);
	Triangle(int w, int h);
	~Triangle();
	void setW(int w);
	void setH(int h);
	int getW();
	int getH();
	double getA();
};
Triangle::Triangle() : Triangle(1, 1) {}
Triangle::Triangle(int w) : Triangle(w, 1) {}
Triangle::Triangle(int w, int h) {
	if (w <= 0 || h <= 0)
	{
		cout << "양수를 입력하시오. (자동으로 길이 1로 저장됨.)" << endl;
		width = 1;
		height = 1;
	}
	else
		width = w;
		height = h;
}
Triangle::~Triangle() {}
void Triangle::setW(int w)
{
	if (w <= 0)
		cout << "양수를 입력하시오" << endl;
	else
	{
		width = w;
	}
	
}
void Triangle::setH(int h)
{
	if (h <= 0)
		cout << "양수를 입력하시오" << endl;
	else
	{
		height = h;
	}
}
int Triangle::getW()
{
	return width;
}
int Triangle::getH()
{
	return height;
}
double Triangle::getA()
{
	return 0.5 * width * height;
}
int main()
{
	Triangle tri;
	tri.setW(3);
	tri.setH(5);
	cout << "삼각형의 폭은" << tri.getW() << endl;
	cout << "삼각형의 높이는" << tri.getH() << endl;
	cout << "삼각형의 넓이는" << tri.getA() << endl;
	return 0;
}