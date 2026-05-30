// Title : 현재 생성된 객체의 개수를 나타내기 위해 tri_num을 static 멤버 변수로 선언하고 셍성된 객체의 개수를 확인하는 프로그램  
// Author : 김준연
// Date : 26.05.24

#include <iostream>
using namespace std;
class Triangle {
	int width;
	int height;
	static int tri_num;
public:
	Triangle(int width = 1, int height = 1);
	~Triangle() { tri_num--; }
	static int getNumofTriangle() { return tri_num; }
};
int Triangle::tri_num = 0;
Triangle::Triangle(int width, int height) {
	this->width = width;
	this->height = height;
	tri_num++;
}
int main() {
	Triangle* tri1 = new Triangle[5];
	cout << "생성된 삼각형의 개수 :" << Triangle::getNumofTriangle()
		<< endl;
	delete[] tri1;
	Triangle tri2[15];
	cout << "생성된 삼각형의 개수 :" << Triangle::getNumofTriangle()
		<< endl;
	return 0;
}
