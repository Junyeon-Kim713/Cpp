#include <iostream>
using namespace std;

class Container {
	int* p;
	int size;
public:
	Container(int size) : size(size < 0 ? 5 : size) {
		if (size < 0)
		{
			cout << "배열의 크기는 양수만 가능. 자동으로 배열 크기 5로 저장" << endl;
		}
		p = new int[size];
	}
	~Container() { delete[] p; }
	void read();
	void write();
	void rotate();
	double avg();
};
void Container::read()
{
	cout << "정수 " << size << "개 입력>>";
	for (int i = 0; i < size; i++)
	{
		cin >> *(p+i);
	}
}
void Container::write()
{
	for (int i = 0; i < size; i++)
	{
		cout << p[i] << ' ';
	}
	cout << '\n';
}
void Container::rotate()
{
	int temp;
	temp = p[size - 1];
	for (int i = size - 2; i >= 0; i--)
	{
		p[i + 1] = p[i];
	}
	p[0] = temp;
}
double Container::avg()
{
	double result = 0;
	for (int i = 0; i < size; i++)
	{
		result += p[i];
	}
	return result / size;
}
int main() {
	Container c(10);
	c.read();
	c.write();
	c.rotate();
	c.write();
	cout << "평균은 " << c.avg() << endl;
}
