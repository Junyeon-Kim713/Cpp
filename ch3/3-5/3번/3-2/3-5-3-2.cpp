// Title : 계좌 하나를 나타내는 클래스 Account를 만들어 입금 출금을 해보는 프로그램
// Author : 김준연
// Date : 26.03.30

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

class Account {
private:
	char owner[20];
	int money;
public:
	Account();
	Account(const char* o);
	Account(int i, const char* o);
	~Account();
	int withdraw(int m);
	void deposit(int m);
	const char* getOwner();
	int inquiry();
};
inline Account::Account() {
	strcpy(owner, "모름");
	money = 0;
}
inline Account::Account(const char* o) {
	strcpy(owner, o);
	money = 0;
}
inline Account::Account(int i, const char* o) {
	if (i < 0)
	{
		cout << "0 이상의 숫자를 입력하시오" << endl;
		money = 0;
		strcpy(owner, o);
	}
	else
	{
		strcpy(owner, o);
		money = i;
	}
}
Account::~Account() {}
inline int Account::withdraw(int m)
{
	if (money - m < 0)
	{
		m = money;
		money = 0;
		return m;
	}
	else
	{
		money -= m;
		return m;
	}
}
inline void Account::deposit(int m) {
	if (m <= 0) {
		cout << "양수를 입력하시오" << endl;
	}
	else
		money += m;
}
inline const char* Account::getOwner() {
	return owner;
}
inline int Account::inquiry() {
	return money;
}
int main()
{
	Account a("황수희");
	a.deposit(20000);
	cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(15000);
	cout << money << "원 출금, ";
	cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
	money = a.withdraw(8000);
	cout << money << " 원 출금, ";
	cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
	return 0;
}