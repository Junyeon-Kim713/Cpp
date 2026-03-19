// 제목 : 사각형 쿨래스를 통해 여러가지 정보를 출력하는 프로그램
// 이름 : 김준연
// 날짜 : 26.03.19
#include <iostream>
using namespace std;

class Rectangle {
	int x, y, width, height;
public:
	Rectangle();
	Rectangle(int x, int y);
	Rectangle(int x, int y, int width, int height);
	int get_Area();
	int get_Perimeter();
	void get_Coord();
};
Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
Rectangle::Rectangle(int x, int y) : Rectangle(x, y, 1, 1) {}
Rectangle::Rectangle(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {}
int Rectangle::get_Area() {
	return width * height;
}
int Rectangle::get_Perimeter() {
	return 2 * (width + height);
}
void Rectangle::get_Coord() {
	cout << "(" << x + width << "," << y - height << ")" << endl;
}
int main() {
	Rectangle rect1; 
	Rectangle rect2(3, 5); 
	Rectangle rect3(3, 5, 2, 4);
	cout << "rect1의 면적은 " << rect1.get_Area() << endl;
	cout << "rect2의 둘레는 " << rect2.get_Perimeter() << endl;
	cout << "rect3의 우측하단의 좌표는 ";
	rect3.get_Coord();
	return 0;
}
