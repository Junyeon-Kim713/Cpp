// Title : 센서 값들을 전달받아 저장하는 클래스를 작성하고 참조 변수를 사용해 복사 생성자와 일반 함수를 정의해 데이터의 평균을 구하는 프로그램
// Author : 김준연  
// Date : 26.05.15

#include <iostream>
using namespace std;

class Collector {
	int* p;
	int size = 0;
public:
	Collector(int size, int values[]);
	Collector(const Collector& src);
	~Collector() { delete[] p; }
	void show();
	int getSize() { return size; }
	int get(int index) { return p[index]; }
};
Collector::Collector(int size, int values[]) : size(size > 0 ? size : 2), p(nullptr) {
	if (!values || size <= 0)
	{
		cout << "잘못된 크기이거나 잘못된 데이터입니다. 2개로 기본 설정합니다." << endl;
		p = new int[2]{0, 0};
	}
	else {
		p = new int[size];
		for (int i = 0; i < size; i++)
			p[i] = values[i];
	}
}
Collector::Collector(const Collector& src) {
	this->size = src.size;
	p = new int[size];
	for (int i = 0; i < size; i++)
		p[i] = src.p[i];
}
void Collector::show() {
	cout << "데이터 수 " << size << ": ";
	for (int i = 0; i < size; i++)
		cout << p[i] << ' ';
	cout << endl;
}
double calcAvg(Collector& weight);
int main() {
	int temp[] = { 69, 70, 71, 72, 74 }; 
	Collector weight(4, temp);
	double avg = calcAvg(weight);
	weight.show();
	cout << "평균은 " << avg << endl;
}
double calcAvg(Collector& weight) {
	double result = 0;
	int size = weight.getSize();

	for (int i = 0; i < size; i++)
	{
		result += weight.get(i);
	}
	return result / size;
}
