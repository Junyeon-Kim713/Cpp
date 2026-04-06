// Title : 저장할 문자열의 크기를 먼저 입력받아 동적할당을 이용하여 메모리를 할당하고 문자열을 출력하는 프로그램
// Author : 김준연
// Date : 26.04.06

#include <iostream>
using namespace std;

int main()
{
	cout << "저장할 문자열의 크기를 입력하세요: ";
	int n;
	cin >> n;
	cout << "문자열을 입력하시오: ";

	char* p = new char[n+1];

	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return -1;
	}
	cin.ignore();
	cin.getline(p, n + 1);
	cout << "입력한 문자열은 " << p << "입니다." << endl;
	delete []p;
	return 0;
}