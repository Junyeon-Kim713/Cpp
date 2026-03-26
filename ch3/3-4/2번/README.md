# 소스코드 설명  
```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언한 모든 이름에 std 생략
```cpp
class Circle {
```
- Circle 클래스 선언  
```cpp
private:
	int radius;
```
- 접근 지정자 private로 선언 후 멤버변수 선언, 클래스 외부에서 직접적인 접근 불가
```cpp
public:
	Circle();
	Circle(int r);
	~Circle();
	void setR(int r);
	int getR();
};
```
- 접근 지정자 public으로 선언 후 생성자, 소멸자, 멤버함수 선언
```cpp
Circle::Circle() : Circle(1) {}
```
- 위임생성자 정의, 인자없는 객체 생성 시 타겟 생성자를 이용해 멤버변수 1로 초기화
```cpp
Circle::Circle(int r) {
	if (r <= 0)
	{
		cout << "양수를 입력하시오" << endl; // 0이나 음수 입력 시 오류 문구 출력
	}
	else
		radius = r;
}
```
- 타겟 생성자 정의, 잘못된 인자 전달을 대비해 예외처리문 작성
```cpp
Circle::~Circle() {}
```
- 소멸자 정의, 메인함수 종료하며 호출됨
```cpp
void Circle::setR(int r)
{
	if (r <= 0)
		cout << "양수를 입력하시오" << endl;
	else
		radius = r;
}
```
- setter 함수 정의, 잘못된 인자 전달을 대비해 예외처리문 작성
```cpp
int Circle::getR()
{
	return radius;
}
```
- getter 함수 정의, 반지름 값 리턴
```cpp
int main()
```
- 메인함수 시작
```cpp
Circle waffle;
```
- waffle 객체 생성
```cpp
waffle.setR(5);
```
- setter 함수를 통해 멤버 변수 값 변경
```cpp
cout << "원의 반지름은 " << waffle.getR() << endl;
```
` 원의 반지름 값 출력, getter 함수를 통해 멤버변수 접근  
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
<img width="803" height="131" alt="스크린샷 2026-03-26 142413" src="https://github.com/user-attachments/assets/8bebcd26-4444-416e-b08c-a4e29fcb2618" />

