//﻿Title : this 포인터를 이용해 멤버함수를 정의한 Triangle 클래스
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
Triangle::Triangle()
{
	this->width = 1;
	this->height = 1;
}
Triangle::Triangle(int w)
{
	if (w <= 0)
	{
		cout << "양수를 입력하시오" << endl;
		this->width = w;
		this->height = 1;
	}
	else
	{
		this->width = w;
		this->height = 1;
	}
}
Triangle::Triangle(int w, int h)
{
	if (w <= 0 || h <= 0)
	{
		cout << "양수를 입력하시오" << endl;
		this->width = w;
		this->height = 1;
	}
	else
	{
		this->width = w;
		this->height = h;
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
	Triangle tri1; 
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
		Triangle tri2(10); 
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
		Triangle tri3(10, 2); 
	cout << "삼각형의 면적은 " << tri3.getArea() << endl;

	return 0;

}