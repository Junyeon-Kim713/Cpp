// Title : 체온을 최대 10개 저장하고 평균값을 구하는 클래스를 통해 여러가지 동작을 수행하는 프로그램
// Author : 김준연
// Date : 26.03.30

#include <iostream>
using namespace std;
class Storage {
private:
	double temp[10];
	int count;
public:
	Storage();
	Storage(double t);
	~Storage();
	void put(double t);
	void dump();
	double getAvg();
};
inline Storage::Storage() {
	int i;
	for (i = 0; i < 10; i++)
		temp[i] = 0;
	count = 0;
}
inline Storage::Storage(double t) {
	if (t <= 0) {
		cout << "양수를 입력하시오" << endl;
		for (int i = 0; i < 10; i++)
			temp[i] = 0;
		count = 0;
	}
	else
	{
		temp[0] = t;
		count = 1;
	}
}
inline Storage::~Storage() {};
inline void Storage::put(double t) {
	if (count < 10 && t >= 0)
	{
		temp[count] = t;
		count++;
	}
	else
		cout << "저장소 꽉 참" << endl;
}
inline void Storage::dump() {
	int i;
	for (i = 0; i < count; i++)
	{
		cout << temp[i] << " ";
	}
	cout << endl;
}
inline double Storage::getAvg() {
	if (count == 0)
		return 0;
	double sum = 0.0;
	for (int i = 0; i < count; i++)
	{
		sum += temp[i];
	}
	return sum / count;
}
int main() {
	Storage a;
	a.put(36.7);
	a.put(36.9);
	a.put(36.4);
	a.dump();
	cout << "평균 체온은 " << a.getAvg() << "입니다." << endl;
	return 0;
}