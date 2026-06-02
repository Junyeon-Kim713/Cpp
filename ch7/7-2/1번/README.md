# 소스코드 설명
```cpp
#include <iostream>
using namespace std;
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
- std 이름공간에 선언한 모든 이름에 std 생략
```cpp
class Complex {
```
- Complex 클래스 선언
```cpp
	int real;
	int img;
```
- 접근 지정자 private으로 멤버 변수 선언
- 복소수의 정수 부분을 저장할 real 변수, 허수 부분을 저장할 img 변수 선언
```cpp
public:
	Complex(int r = 0, int i = 0) : real(r), img(i) {}
	void show() {
		if(img>0)
			cout << real << '+' << img << 'i' << endl;
		else
			cout << real << img << 'i' << endl;
	}
	Complex  operator +(Complex& op2);

};
```
- 접근 지정자 public으로 멤버 함수 선언
- 생성자 선언 및 정의, 디폴트 매개변수와 멤버 초기화 리스트를 통해 정의
- 복소수 객체의 상태를 출력하는 멤버함수 show 선언 및 정의, 허수부의 부호에 맞게 출력
- +연산자 함수 선언, +연산자 우측항의 객체를 인자로 받아옴
```cpp
Complex Complex::operator +(Complex& op2) {
	Complex temp;
	temp.real = this->real + op2.real;
	temp.img = this->img + op2.img;
	return temp;
	
}
```
- +연산자 함수 정의
- 연산의 결과값을 저장할 Complex 클래스 객체 temp 선언
- +연산자의 좌항의 객체와 우측항의 객체의 멤버 변수 real의 값을 더한 후 결과값 temp의 real에 대입
- +연산자의 좌항의 객체와 우측항의 객체의 멤버 변수 img의 값을 더한 후 결과값 temp의 img에 대입
- temp 객체 반환하고 함수 종료
```cpp
int main() {
```
- 메인함수 시작
```cpp
	Complex x(2, 3), y(-5, 10), sum;
```
- complex 객체 x, y, sum 생성
```cpp
	sum = x + y;
```
- +연산자 함수 호출, 객체 x가 객체 y를 인자로 함수 호출, 리턴값 sum 객체에 대입
```cpp
	cout << "두 복소수의 합은";
	sum.show();
```
-  멤버 함수 show() 호출로 결과 출력
```cpp
  return 0;
```
- 0을 반환하고 메인함수 종료
# 실행 결과
<img width="809" height="124" alt="image" src="https://github.com/user-attachments/assets/c0aa6ee0-e07c-472b-9499-d6fef4eec003" />

