#include <iostream>
using namespace std;

class Point3D {
	int x, y, z;
public:
	Point3D(int x, int y, int z);
	Point3D(int x, int y);
	Point3D(int x);
	Point3D() : Point3D(0, 0, 0) {}
	void show() {
		cout << "3차원 점의 좌표는 (" << x << ", " << y << ", " << z << ")" << endl;
	}
};
Point3D::Point3D(int x, int y, int z) : x(x), y(y), z(z) {}
Point3D::Point3D(int x, int y) : Point3D(x,y,0) {}
Point3D::Point3D(int x) : Point3D(x,0,0) {}
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
