# 문제점  
- delete 연산자로 다시 반환을 하지 않아 메모리 누수가 발생한다.
# 소스코드 설명  
```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언이 담긴 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
class Circle {
```
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
int radius;
```
- 사용자로부터 반지름을 입력받을 정수형 변수 선언
```cpp
while (true) {
```
- 사용자가 반지름으로 음수를 입력할 때까지 반복하기 위한 while 무한루프 사용
```cpp
cout << "반지름 입력(음수이면 종료)>> ";
```
- 도움말 출력
```cpp
cin >> radius;
```
- 키보드로부터 반지름 입력 받아 radius에 저장
```cpp
if (radius < 0) break;
```
- radius에 저장된 값이 음수면 무한루프 탈출
```cpp
Circle* p = new Circle(radius);
```
- 동적할당을 통해 힙공간에 객체 생성
```cpp
cout << "원의 면적:" << p->getArea() << endl;
```
- 객체의 원의 면적 출력
```cpp
delete p; // 메모리 반환
}
```
- 사용이 끝난 후 메모리 반환, 메모리 누수 방지  
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
<img width="804" height="523" alt="스크린샷 2026-04-09 170724" src="https://github.com/user-attachments/assets/01c97dad-71ee-46eb-b198-0e3cef6f85d9" />


