# 문제점  
- pArray에 증가 연산자를 사용해서 delete로 반환할 때 pArray가 처음 동적할당 받을 때와 다른 주소를 가리키고 있음.
# 소스코드 설명  
```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언이 담긴 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
- Circle 클래스 선언 시작
```cpp
int radius;
```
- private로 멤버 변수 선언
```cpp
public:
```
- 접근지정자 public으로 선언, 이후 나오는 멤버들은 외부에서 접근 가능
```cpp
  Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
```
- 생성자, 소멸자 , 멤버 함수 선언 및 코드가 짧은 함수들은 선언부에 정의
```cpp
Circle::Circle() {
	radius = 1; cout << "생성자 실행 radius = " << radius << endl;
}
```
- 인자가 없는 생성자 정의, 반지름 1로 초기화, 객체의 생명주기를 증명하는 출력문 작성
```cpp
Circle::Circle(int r) {
	radius = r; cout << "생성자 실행 radius = " << radius << endl;
}
```
- 인자가 있는 생성자 정의, 인자로 받은 정수 반지름으로 초기화
```cpp
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}
```
- 소멸자 정의, 객체의 생명주기를 증명하는 출력문 작성
```cpp
int main() {
```
- 메인함수 시작
```cpp
Circle* pArray = new Circle[3];
```
- 동적할당을 통해 힙공간에 객체배열 생성 후 배열의 첫번째 주소 pArray에 저장
```cpp
Circle* p = pArray;
```
- pArray에 저장되어 있는 주소값 복사해서 포인터 p에 저장
```cpp
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << '\n';
		p++;
	}
```
- for문을 통해 각 객체의 면적을 출력, 증가 연산자를 통해 p의 값을 증가시켜 배열에 접근
```cpp
delete[] pArray;
```
- pArray로 메모리 반환, 증가 연산자로 p를 증가시켰으므로 문제가 발생하지 않음
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
<img width="803" height="396" alt="스크린샷 2026-04-09 174543" src="https://github.com/user-attachments/assets/7729d236-73cb-4408-bd40-9655deb06fe1" />

