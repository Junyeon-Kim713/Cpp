# 소스코드 설명
```cpp
#include <iostream>
using namespace std;
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
class Complex {
```
- 복소수 클래스 선언
```cpp
	int real;
	int img;
```
- 접근 지정자 private로 멤버변수 선언, 복소수의 정수부를 저장할 변수 real, 허수부를 저장할 변수 img 선언
```cpp
public:
	Complex(int r = 0, int i = 0) : real(r), img(i) {}
	void show() {
		if(img>0)
			cout << real << '+' << img << 'i' << endl;
		else
			cout << real << img << 'i' << endl;
	}
	Complex&  operator +=(Complex& op2);

};
```
- 접근 지정자 public으로 멤버 함수 선언
- 생성자 선언 및 정의, 디폴트 매개변수와 멤버 초기화 리스트를 통해 정의
- 함수 호출 객체의 복소수를 출력하는 멤버 함수 show 선언 및 정의, 허수부의 부호에 맞춰 출력
- +=연산자 함수 선언, 매개변수와 리턴을 참조로 선언, 참조 리턴으로 연속적인 += 연산 가능
```cpp
Complex& Complex::operator +=(Complex& op2) {
	this->real = this->real + op2.real;
	this->img = this->img + op2.img;
	return *this;
}
```
- += 연산자 함수 정의
- 함수 호출 객체의 멤버 변수 real의 값과 인자 객체의 멤버 변수 real의 값을 더한 후 함수 호출 객체의 real 변수에 대입
- 함수 호출 객체의 멤버 변수 img의 값과 인자 객체의 멤버 변수 img의 값을 더한 후 함수 호출 객체의 img 변수에 대입 
- 함수 호출 객체의 참조를 리턴하고 함수 종료
```cpp
int main() {
	Complex a(3, 5), b(-10, -10);
	a.show();
	b.show();
	b += a;
	a.show();
	b.show();
	return 0;
}
```
- Complex 객체 a, b 생성
- 멤버 함수 show를 호출해 객체 a의 복소수 출력
- 멤버 함수 show를 호출해 객체 b의 복소수 출력
- += 연산자 함수 호출, b와 a의 복소수를 덧셈 연산 후 b에 대입, a를 인자로 b 객체가 함수 호출
- 멤버 함수 show를 호출해 객체 a의 복소수 출력
- 멤버 함수 show를 호출해 객체 b의 복소수 출력
- 0을 반환하고 함수 종료
# 실행 결과
<img width="795" height="226" alt="image" src="https://github.com/user-attachments/assets/688721e0-2ac8-4179-af9b-f15db8b157a6" />

