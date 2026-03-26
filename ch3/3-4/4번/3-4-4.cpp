// Title : 모든 멤버변수를 private로 선언하고 잘못된 멤버변수 값 입력을 방지하는 Triangle 클래스
// Author : 김준연
// Date : 26.03.26

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
		cout << "길이는 양수이어야함 대신에 폭1, 높이1 삼각형 생성" << endl;
		width = 1;
		height = 1;
	}
	else
		width = w;
		height = h;
}
Triangle::~Triangle() {
	cout << "폭: " << width << ", 길이: " << height << " 삼각형 소멸" << endl;
}
void Triangle::setW(int w)
{
	if (w <= 0)
		cout << "폭은 양수이어야함" << endl;
	else
	{
		width = w;
	}

}
void Triangle::setH(int h)
{
	if (h <= 0)
		cout << "높이는 양수이어야함" << endl;
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
	Triangle tri(-10, -5);
	tri.setW(-3);
	tri.setH(-5);
	tri.setW(3);
	tri.setH(5);
	cout << "삼각형의 폭은" << tri.getW() << endl;
	cout << "삼각형의 높이는" << tri.getH() << endl;
	cout << "삼각형의 넓이는" << tri.getA() << endl;
	return 0;
}