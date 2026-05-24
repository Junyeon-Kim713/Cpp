// Title : 함수 중복을 통해 매개변수의 갯수가 다른 생성자를 선언한 프로그램  
// Author : 김준연  
// Date : 26.05.24

#include <iostream>
using namespace std;
class Rectangle {
	int width;
	int height;
public:
	Rectangle(int w, int h) {
		width = w;
		height = h;
	}
	Rectangle(int w) : Rectangle(w, 1) {}
	Rectangle() : Rectangle(1, 1) {}
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
