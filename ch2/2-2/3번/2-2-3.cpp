#include <iostream>
using namespace std;

int main()
{
	int num;
	char name[10];
	char address[20];

	cout << "학번을 입력하시오: ";
	cin >> num;
	cout << "이름을 입력하시오: ";
	cin >> name;
	cin.ignore();
	cout << "주소를 입력하시오: ";
	cin.getline(address, sizeof(address), '\n');

	cout << "1. 학번: " << num << '\n' << "2. 이름: " << name << '\n' << "3. 주소: " << address << endl;
	return 0;

}