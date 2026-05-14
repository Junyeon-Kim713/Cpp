// Title : 깊은 복사생성자를 정의해 Mystack 클래스를 선언하고 객체를 복사 생성해 stack을 구현하는 프로그램
// Author : 김준연
// Date : 26.05.15

#include <iostream>
using namespace std;

class Mystack {
	int* p;
	int size = 0;
	int tos = 0;
public:
	Mystack();
	Mystack(int size);
	Mystack(const Mystack& src);
	~Mystack();
	bool push(int n);
	bool pop(int& n);
};
Mystack::Mystack() : Mystack(5) {}
Mystack::Mystack(int size) : size(size > 0 ? size : 5), tos(0) {
    p = new int[this->size]; 
    
    if (size <= 0) {
        cout << "size 5인 스택 생성" << endl;
    }
}
Mystack::Mystack(const Mystack& src) {
	p = new int[src.size];
	size = src.size;
	tos = src.tos;

	for (int i = 0; i < tos; i++) {
		p[i] = src.p[i];
	}
}
Mystack::~Mystack() {
	delete [] p;
}
bool Mystack::push(int n) {
	if (tos == size)
		return false;
	else {
		p[tos++] = n;
		return true;
	}
}
bool Mystack::pop(int& n) {
	if (tos == 0)
		return false;
	else
	{
		n = p[tos-1];
		tos--;
		return true;
	}
}
int main() {
	Mystack a(10);
	a.push(10); a.push(20);

	Mystack b(a);
	b.push(30);
	int n;
	a.pop(n);
	cout << "스택 a에서 pop한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 pop한 값 " << n << endl;
	return 0;
}
