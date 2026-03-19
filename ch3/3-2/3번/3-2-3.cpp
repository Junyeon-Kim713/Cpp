// 제목 : 구 클래스를 통해 구의 부피를 구하는 프로그램
// 이름 : 김준연
// 날짜 : 26.03.19
#include <iostream>
using namespace std;
class Sphere {
	int r;
public:
	Sphere();
	Sphere(int a);
	double get_Volume();
};
Sphere::Sphere() : Sphere(1) {}
Sphere::Sphere(int a) : r(a) {}
double Sphere::get_Volume() {
	return (4.0 / 3.0) * 3.14 * r * r * r;
}
int main() {
	Sphere sph1; 
	cout << "구의 부피는" << sph1.get_Volume() << endl;
	Sphere sph2(3); 
	cout << "구의 부피는" << sph2.get_Volume() << endl;
	return 0;
}
