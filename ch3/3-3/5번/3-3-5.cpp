// Title : 구 클래스를 선언하고 전역객체를 생성해 부피를 구하는 프로그램
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
	cout << "반지름 " << radius << "인 구 생성\n"; 
}

Sphere::~Sphere() {
	cout << "반지름 " << radius << "인 구 소멸\n";
}

double Sphere::getVolume(){ 
	return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}
Sphere globalsph1(10);
Sphere globalsph2(20);
int main() {
	
	cout << "구의 부피는 " << globalsph1.getVolume() << "\n";
	cout << "구의 부피는 " << globalsph2.getVolume() << "\n";

	return 0;
}