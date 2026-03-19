// 제목 : 삼각형 클래스를 통해 삼각형의 면적을 구하는 프로그램
// 이름 : 김준연
// 날짜 : 26.03.19
#include <iostream>

using namespace std;

class Triangle {
	int width, height;
public:
	Triangle();
	Triangle(int a, int b);
	double get_Area();
};
Triangle::Triangle() : Triangle(1, 1) {}
Triangle::Triangle(int a, int b) : width(a), height(b) {}
double Triangle::get_Area() {
	return width * height * 0.5; 
}
int main() {
	Triangle tri1; 
	cout << "삼각형의 면적은 " << tri1.get_Area() << endl;
	Triangle tri2(2, 4); 
	cout << "삼각형의 면적은 " << tri2.get_Area() << endl;
	return 0;
}