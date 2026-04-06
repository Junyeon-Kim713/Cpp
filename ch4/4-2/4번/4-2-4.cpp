// Title : 저장할 실수의 개수를 먼저 입력받아 동적할당을 이용하여 메모리를 할당하고 실수의 최댓값을 구하는 프로그램
// Author : 김준연
// Date : 26.04.06

#include <iostream>
using namespace std;

int main()
{
	cout << "입력할 실수의 개수를 입력하세요: ";
	int n;
	cin >> n;
	cout << n << "개의 실수를 입력하세요." << endl;
	double* p = new double[n];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return -1;
	}
	
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	double max;
	max = p[0];
	for (int i = 1; i < n; i++)
	{
		if (max < p[i])
			max = p[i];
	}
	delete [] p;
	cout << "최댓값은 " << max << "입니다." << endl;
	return 0;
}