// Title : 참조에 의한 호출을 이용해 실수의 정수 부분과 소수 부분을 분리해 리턴하고 출력하는 프로그램
// Author : 김준연  
// Date : 26.05.10

#include <iostream>
using namespace std;
void get_part(double num, int& refint_part, double& refdec_part);
int main() {
	double num;
	int int_part;
	double dec_part;
	cout << "실수를 입력하시오: ";
	cin >> num;
	get_part(num, int_part, dec_part);
	cout << "정수부 : " << int_part << '\n' << "소수부 : " << dec_part << endl;
	return 0;
}
void get_part(double num, int& refint_part, double& refdec_part)
{
	refint_part = (int)num;
	refdec_part = num - refint_part;
}
