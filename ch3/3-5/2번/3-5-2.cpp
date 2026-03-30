// Title : 자동 인라인함수를 통해 생성한 Triangle 클래스
// Author : 김준연
// Date : 26.03.30

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
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 면적은" << tri.getArea() << endl;
	return 0;

}