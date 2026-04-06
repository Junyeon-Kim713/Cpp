#include <iostream>
using namespace std;

int main()
{
	cout << "입력할 정수의 개수를 입력하세요: ";
	int n;
	cin >> n;
	cout << n << "개의 정수를 입력하세요." << endl;
	int* p = new int[n];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return -1;
	}
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> *(p + i);
		sum += *(p + i);
	}
	delete [] p;
	cout << "평균값은 " << sum / n << "입니다." << endl;
	return 0;

}