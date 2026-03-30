# 소스코드 설명  
```cpp
#define _CRT_SECURE_NO_WARNINGS
```
- 문자열 함수 보안 오류를 해결하는 코드 삽입
```cpp
#include <iostream>
#include <cstring>
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
- strcpy, strcmp 등의 문자열 전용함수의 선언이 담긴 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간 안에 선언된 모든 이름에 std 생략
```cpp
class Account {
```
- Account 클래스 선언
```cpp
private:
	char owner[20];
	int money;
```
- 접근 지정자 private로 멤버 변수 선언, 계좌 주인의 이름과 잔액을 저장  
```cpp
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
```
- 접근지정자 public으로 생성자, 소멸자, 멤버함수 선언
```cpp
inline Account::Account() {
	strcpy(owner, "모름");
	money = 0;
}
```
- 인라인 함수로 인자가 없는 생성자 정의
```cpp
inline Account::Account(const char* o) {
	strcpy(owner, o);
	money = 0;
}
```
- 인라인 함수로 인자가 한 개만 있는 생성자 정의
```cpp
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
```
- 인자가 모두 있는 생성자 인라인함수로 정의, 예외 처리 구문 작성
```cpp
Account::~Account() {}
```
- 소멸자 정의
```cpp
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
```
- 멤버 함수 인라인 함수로 정의, 출금 기능을 수행, 잔액보다 많은 금액 출금 시도 시 잔액을 전부 출금 후 출금한 잔액 리턴, 잔액이 넉넉한 경우 잔액에서 출금할 금액 제외 후 출금한 금액 리턴
```cpp
inline void Account::deposit(int m) {
	if (m <= 0) {
		cout << "양수를 입력하시오" << endl;
	}
	else
		money += m;
}
```
- 멤버함수 인라인 함수로 정의, 입금 기능 수행, 음수를 전달할 경우를 대비한 예외처리문 작성
```cpp
inline const char* Account::getOwner() {
	return owner;
}
```
- getter 함수 인라인 함수로 정의, 반환형에 const를 붙이지 않으면 strcpy(a.getOwner(), "해커"); 처럼 주소를 넘겨받는 것을 잘못 이용할 수 있음 따라서 const를 붙여 읽기 전용으로 변환
```cpp
inline int Account::inquiry() {
	return money;
}
```
- 잔액을 반환하는 멤버함수를 인라인함수로 정의
```cpp
int main()
```
- 메인함수 시작
```cpp
Account a("황수희");
```
- 객체 생성 및 계좌 주인 이름을 인자로 전달
```cpp
a.deposit(20000);
```
- 입금을 위한 멤버함수 호출
```cpp
cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
```
- 잔액을 확인하는 문구 출력, 멤버함수를 피연산자로 사용
```cpp
int money = a.withdraw(15000);
```
- 출금을 위한 멤버함수 호출 및 출금한 금액값을 리턴받아 money 변수에 저장
```cpp
cout << money << "원 출금, ";
```
- 출금한 금액을 확인하는 문구
```cpp
cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
```
- 잔액을 확인하는 문구 출력, 멤버함수를 피연산자로 사용
```cpp
money = a.withdraw(8000);
```
- 잔액보다 많은 금액 출금 시도, 출금되는 금액 money 변수에 저장
```cpp
cout << money << " 원 출금, ";
```
- 출금된 금액 확인
```cpp
cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
```
- 잔액을 확인하는 문구 출력, 멤버함수를 피연산자로 사용
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과  
<img width="799" height="193" alt="스크린샷 2026-03-30 200328" src="https://github.com/user-attachments/assets/87ac4542-84f4-4c3f-8450-785bb0cb8d37" />

