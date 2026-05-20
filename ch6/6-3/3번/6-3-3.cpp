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
