// Title : 디폴트 매개변수로 생성자를 선언해 함수 중복을 간소화한 프로그램
// Author : 김준연
// Date : 26.05.24

#include <iostream>
using namespace std;

class Point3D {
	int x, y, z;
public:
	Point3D(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z) {}
	void show() {
		cout << "3차원 점의 좌표는 (" << x << "," << y << ',' << z << ')' << endl;
	}

};
int main() {
	Point3D p0;
	p0.show();
	Point3D p1(1);
	p1.show();
	Point3D p2(1, 2);
	p2.show();
	Point3D p3(1, 2, 3);
	p3.show();
	return 0;
}
