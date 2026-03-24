// Title : 구 클래스를 선언하고 객체를 생성해 부피를 구하는 프로그램
// Author : 김준연
// Date : 26.03.25
#include <iostream>

using namespace std;

class Sphere {
public:
	int radius;
	Sphere();
	Sphere(int r);
	~Sphere();
	double getVolume();
};
Sphere::Sphere() : Sphere(1) {}
Sphere::Sphere(int r) : radius(r)
{
	cout << "반지름 " << radius << "인 구 생성" << endl;
}
Sphere::~Sphere() {
	cout << "반지름 " << radius << "인 구 소멸" << endl;
}
double Sphere::getVolume() {
	return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}
int main() {

	Sphere sph1; 
	cout << "구의 부피는" << sph1.getVolume() << endl;
	Sphere sph2(3); 
	cout << "구의 부피는" << sph2.getVolume() << endl;
	return 0;

}
