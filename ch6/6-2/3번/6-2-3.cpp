#include <iostream>

using namespace std;

class Point3D {
	int x, y, z;
public:
	Point3D(int x = 0, int y = 0, int z = 0) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
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
