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
- Circle 클래스 선언
```cpp
private:
	int radius;
```
- 접근 지정자 private로 멤버변수 radius 선언
```cpp
public:
```
- 접근 지정자 public으로 선언, 이후 나오는 멤버는 클래스 외부에서 접근 가능  
```cpp
  Circle(int radius) { this->radius = radius; }
```
- 생성자 정의, 전달받은 인자로 멤버변수 radius 초기화
```cpp
	Circle& plus(int n) {
		radius += n;
		return *this;
	}
```
- 멤버함수 plus 정의, 함수 호출 시 전달받은 인자값만큼 반지름의 길이 증가
- 참조 리턴으로 객체 자기 자신의 참조를 리턴
```cpp
  Circle& minus(int n) {
		  radius -= n;
		  return *this;
	}
```
- 멤버함수 minus 정의, 함수 호출 시 전달받은 인자값만큼 반지름의 길이 감소
- 참조 리턴으로 객체 자기 자신의 참조를 리턴
```cpp
	int getRadius()
	{
		return radius;
	}
}
```
- getter 함수 정의, 함수 호출 시 객체의 반지름 리턴
- 클래스 정의 끝
```cpp
int main() {
```
- 메인함수 시작
```cpp
Circle a(5);
```
- Circle 클래스 객체 a 생성 및 반지름 5로 초기화
```cpp
a.plus(1).plus(2).plus(3).minus(3).minus(2).minus(1).minus(5);
```
- 참조 리턴을 이용한 연속된 멤버 함수 호출
- 참조 리턴은 임시객체가 아닌 원본 객체의 참조를 리턴하므로 리턴한 결과를 일반 변수나 객체처럼 사용 가능
```cpp
cout << "객체 a의 반지름은 " << a.getRadius();
```
- 결과 출력
```cpp
return 0;
}
```
- 0을 반환하고 메인함수 종료
# 실행 결과  
<img width="799" height="142" alt="스크린샷 2026-05-12 020935" src="https://github.com/user-attachments/assets/36c8c2cb-46c6-48a8-84f6-372480cdbea4" />

 
