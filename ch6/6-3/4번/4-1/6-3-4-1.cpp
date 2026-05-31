// Title : 함수 중복, 디폴트 매개변수를 통해 작성한 Vector 클래스
// Author : 김준연
// Date : 26.05.24

#include <iostream>
using namespace std;

class Vector {
	int* mem;
	int size;
public:
	// ---함수 중복을 사용한 생성자---
    // Vector(); 
	// Vector(int size, int value);
	Vector(int size = 5, int value = 0);
	~Vector() { delete[] mem; }
	void show();
	void show(int n);
	//void show(int n = -1); 디폴트 매개변수를 사용한 show 함수
};
Vector:: Vector(int size, int value) : size(size>0 ? size:5){
	
	mem = new int[this->size];

	for (int i = 0; i < this->size; i++)
	{
		mem[i] = value;
	}
}
void Vector::show() {
	show(this->size);
}
void Vector::show(int n) {
	if (n <= 0)
		cout << " 잘못된 숫자 입력" << endl;
	else {
		for (int i = 0; i < n; i++)
		{
			cout << mem[i] << ' ';
		}
		cout << endl;
	}
}
/* 디폴트 매개변수로 작성한 show 함수
void Vector::show(int n) {
	if(n = -1)
		n = this->size;
	for (int i = 0; i < n; i++)
	{
		cout << mem[i] << ' ';
	}
	cout << endl;
}
*/
int main() {
	Vector x;
	Vector y(10, 8);
	x.show();
	y.show();
	y.show(3);
}
