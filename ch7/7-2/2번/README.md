# 소스코드 설명 
```cpp
#include <iostream>
using namespace std;
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
- std 이름공간에 선언된 모든 이름에 std 생략
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
		if (img > 0)
			cout << real << '+' << img << 'i' << endl;
		else
			cout << real << img << 'i' << endl;
	}
	Complex  operator *(Complex& op2);

};
```
- 접근 지정자 public으로 멤버 함수 선언
- 생성자 선언 및 정의, 디폴트 매개변수와 멤버 초기화 리스트를 통해 정의
- 복소수 객체의 상태를 출력하는 함수 show 선언 및 정의, 허수부의 부호에 맞춰 출력
- *연산자 함수 선언
```cpp
Complex Complex::operator *(Complex& op2) {
	Complex temp;
	temp.real = (this->real * op2.real) + (this->img * op2.img * -1);
	temp.img = (this->real * op2.img) + (this->img * op2.real);
	return temp;
}
```
- *연산자 함수 정의
- 결과값을 저장할 객체 temp 선언
- 함수 호출 객체의 복소수와 인자 객체의 복소수의 곱연산 중, 정수부의 결과값을 temp의 멤버변수 real에 대입
- 함수 호출 객체의 복소수와 인자 객체의 복소수의 곱연산 중, 허수부의 결과값을 temp의 멤버변수 img에 대입
- 복소수의 곱연산 결과를 저장한 객체 temp 리턴하고 함수종료
```cpp
int main() {
	Complex x(2, 3), y(-5, 10), sum;
	sum = x * y;
	cout << "두 복소수의 곱은";
	sum.show();
	return 0;
}
```
- 메인함수 시작
- Complex 클래스 객체 x, y, sum 생성
- *연산자 함수 호출, x와 y 객체의 복소수끼리 곱 수행, 객체 x가 함수 y를 인자로 호출, 리턴값 sum에 대입
- 멤버 함수 show()를 호출하여 결과 출력
- 0을 리턴하고 메인함수 종료
# 실행 결과  
<img width="802" height="125" alt="image" src="https://github.com/user-attachments/assets/0187151f-f41e-4b7a-aa3e-cb504f26cbc1" />
