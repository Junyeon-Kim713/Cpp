# 소스코드 설명  
```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언이 담긴 헤더파일 포함
```cpp
#include <string>
```
- string 객체의 선언이 담긴 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
class Person {
```
- Person 클래스 선언 시작
```cpp
	string name;
	int id;
```
- 접근 지정자 private로 멤버 변수 선언, 이름을 저장할 string 객체 name 선언 및 구분 번호 저장을 위한 int형 변수 id 선언
```cpp
public:
  Person(int id, const string); // 생성자
	Person(const Person& person); // 복사 생성자
	~Person(); // 소멸자
	void changeName(const string);
	void show() { cout << id << ',' << name << endl; }
};
```
- 접근 지정자 public으로 멤버 함수 선언 및 클래스 선언부 종료
- 멤버 변수의 값을 출력하는 멤버 함수 show() 정의  
```cpp
Person::Person(int id, const string name) { // 생성자
	this->id = id;
	this->name = name; 
}
```
- 생성자 정의, 정수와 문자열을 입력받아 멤버 변수 id, name 초기화
```cpp
Person::Person(const Person& person) { // 복사 생성자
	this->id = person.id;
	this->name = person.name;
	cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}
```
- 복사 생성자 정의, 매개변수를 참조 객체로 선언
- 참조 객체의 id와 name으로 멤버 변수 초기화, string 객체이기 때문에 동적할당된 공간을 같이 가리키는 얕은 복사의 문제점 발생X
```cpp
Person::~Person() {
}
```
- 소멸자 정의, string 객체에 문자열을 저장했기 때문에 따로 힙공간 메모리 반환하지 않아도됨  
```cpp
void Person::changeName(const string name) {
	this->name = name;
}
```
- 이름을 변경하는 멤버 함수 정의, 전달받은 string 객체의 문자열로 멤버 변수
```cpp
int main() {
```
- 메인함수 시작
```cpp
Person father(1, "Kitae");
```
- father 객체 생성
```cpp
Person daughter(father);
```
- father 객체를 인자로 dauther 객체 복사 생성, 복사 생성자 호출되어 객체 생성 및 초기화
```cpp
cout << "daughter 객체 생성 직후 ----" << endl;
father.show();
daughter.show();
```
- 객체 생성 직후 멤버함수 show()를 통해 객체의 멤버 변수값 출력
```cpp
daughter.changeName("Grace");
```
- 멤버함수 changeName()를 통해 daughter 객체의 name에 저장된 문자열 변경
```cpp
cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
father.show();
daughter.show();
```
- daughter 객체의 name에 저장된 문자열 변경 후 father 객체와 daughter 객체의 멤버 변수값 출력
```cpp
return 0;
}
```
- 0을 반환하고 메인함수 종료
# 실행 결과  
<img width="806" height="330" alt="image" src="https://github.com/user-attachments/assets/e70a45bd-718c-4094-9585-508a0f86677b" />


