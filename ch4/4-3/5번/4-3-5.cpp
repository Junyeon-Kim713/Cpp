// Title : 생성할 객체의 개수를 먼저 입력받고 동적할당하는 프로그램
// Author : 김준연
// Date : 26.04.09

#include <iostream>
using namespace std;

class Sphere {
private:
	int radius;
public:
	Sphere(int r);
	Sphere() : Sphere(1) {}
	~Sphere() {}
	void setRadius(int r);
	int getRadius() { return radius; }
	double getVolume() { return (4.0 / 3.0) * 3.14 * radius * radius * radius; }

};
Sphere::Sphere(int r) {
	setRadius(r);
}
void Sphere::setRadius(int r)
{
	if (r < 0)
	{
		cout << "반지름은 양수만 가능, 자동으로 1로 초기화" << endl;
		radius = 1;
	}
	else
		radius = r;
}
int main()
{
	int n;
	cout << "생성하고자 하는 구의 개수: ";
	cin >> n;
	Sphere* pArray = new Sphere[n];
	for (int i = 0; i < n; i++)
	{
		int radius;
		cout << "구" << i + 1 << "의 반지름: ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}
	for (int i = 0; i < n; i++)
	{
		cout << "구" << i + 1 << "의 부피: " << pArray[i].getVolume() << endl;
	}
	delete[] pArray;
	return 0;
}
