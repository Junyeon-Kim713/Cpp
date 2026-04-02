// Title : 객체 포인터를 이용해 삼각형의 넓이를 구하는 프로그램
// Author : 김준연
// Date : 26.04.02


#include <iostream>

using namespace std;

class Triangle {
private:
	int width;
	int height;
public:
	Triangle() { width = 1; height = 1; }
	Triangle(int w, int h) {
		width = w; height = h;
		cout << "폭 " << width << "높이 " << height << "인 삼각형 생성" << endl;
	}
	~Triangle() {
		cout << "폭 " << width << "높이 " << height << "인 삼각형 소멸" << endl;
	}
	void setWidth(int w) {
		if (w <= 0)
			cout << "양수를 입력하시오" << endl;
		else
			width = w;
	}
	void setHeight(int h) {
		if (h <= 0)
			cout << "양수를 입력하시오" << endl;
		else
			height = h;
	}
	double getArea() {
		return 0.5 * width * height;
	}

};
int main()
{
	Triangle tri;
	Triangle* p;
	p = &tri;
	(*p).setWidth(3);
	p->setHeight(5);
	cout << "삼각형의 면적은" << p->getArea() << endl;
	return 0;

}