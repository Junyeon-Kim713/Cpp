// Title : 디폴트 매개변수로 생성자를 선언해 함수중복을 간소화한 프로그램 
// Author : 김준연  
// Date : 26.05.24

#include <iostream>
using namespace std;
class Rectangle {
	int width;
	int height;
public:
	Rectangle(int w=1, int h=1) : width(w), height(h) {}
	void show() {
		cout << "사각형의 폭은 " << width << "높이는 " << height << endl;
	}
};
int main() {
	Rectangle rect0;
	rect0.show();
	Rectangle rect1(10);
	rect1.show();
	Rectangle rect2(10, 20);
	rect2.show();
	return 0;
}
