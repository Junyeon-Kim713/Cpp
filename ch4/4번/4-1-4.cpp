//﻿ Title : 객체 배열을 이용해 삼각형의 넓이를 구하는 프로그램
// Author : 김준연
// Date : 26.04.02

#include <iostream>
using namespace std;

class Triangle {
private:
	int width;
	int height;
public:
	Triangle();
	Triangle(int w);
	Triangle(int w, int h);
	~Triangle() {
		cout << "폭 " << this->width << "높이 " << this->height << "인 삼각형 소멸" << endl;
	}
	void setWidth(int w);
	void setHeight(int h);
	double getArea() {
		return 0.5 * this->width * this->height;
	}

};
Triangle::Triangle() : Triangle(1, 1) {}
Triangle::Triangle(int w) : Triangle(w, 1) {}
Triangle::Triangle(int w, int h)
{
	if (w <= 0 || h <= 0)
	{
		cout << "양수를 입력하시오" << endl;
		this->width = 1;
		this->height = 1;
		cout << "밑변, 높이 1인 삼각형 생성" << endl;
	}
	else
	{
		this->width = w;
		this->height = h;
		cout << "밑변 "<< width << ", 높이 " <<  height << "인 삼각형 생성" << endl;
	}
}
void Triangle::setWidth(int w)
{
	if (w <= 0)
		cout << "양수를 입력하시오" << endl;
	else
		this->width = w;
}
void Triangle::setHeight(int h) {
	if (h <= 0)
		cout << "양수를 입력하시오" << endl;
	else
		this->height = h;
}
int main()
{
	Triangle tri[3] = { Triangle(2,2), Triangle(4,4), Triangle(6,6) };
	for (int i = 0; i < 3; i++)
	{
		cout << "삼각형" << i << "의 면적은" << tri[i].getArea() << endl;
	}

	return 0;

}