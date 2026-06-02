# 소스코드 설명  
```cpp
#include <iostream>
using namespace std;
```  
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함  
- std 이름공간에 선언된 모든이름에 std 생략  
```cpp
class Complex {
```  
- 복소수 클래스 선언  
```cpp
	int real;
	int img;
  ```  
  - 접근 지정자 private으로 멤버변수 선언, 복소수의 정수부를 저장할 real, 허수부를 저장할 img 선언  
  ```cpp
  public:
  	Complex(int r = 0, int i = 0) : real(r), img(i) {}
	void show() {
		if (img >= 0)
			cout << real << '+' << img << 'i' << endl;
		else
			cout << real << img << 'i' << endl;
	}
	Complex operator -(int op2);

};
```  
- 접근 지정자 public으로 멤버 함수 선언  
- 생성자 선언 및 정의, 디폴트 매개변수와 멤버 초기화 리스트를 통해 초기화  
- 객체의 복소수 상태를 출력하는 멤버 함수 show 선언 및 정의, 허수부의 부호에 맞춰 출력  
- -연산자 함수 선언  
```cpp
Complex Complex::operator -(int op2) {
	Complex temp = *this;
	temp.real = this->real - op2;
	return temp;
}
```  
- -연산자 함수 정의, 정수를 인자로 받아옴  
- 복사 생성자 호출해 함수 호출 객체를 복사하여 결과값을 저장할 객체 temp 생성  
- 함수 호출 객체의 real 값에 매개변수의 값을 뺼셈 연산 후 temp의 real에 대입, 복소수와 정수의 뺼셈 연산 구현  
- temp 리턴하고 함수 종료  
```cpp
int main() {
``` 
- 메인함수 시작  
```cpp
	Complex a(3, 5), b;
```  
- 복소수 객체 a, b 생성  
```cpp
	a.show();
	b.show();
```  
- a와 b의 복소수 출력  
```cpp
	b = a - 2;
```  
- -연산자 함수 호출 해 a 객체의 복소수와 정수 2의 뺼셈 연산 수행, 정수 2를 인자로 객체 a가 함수 호출, 리턴값 b에 대입  
```cpp
	a.show();
	b.show();
```  
- a와 b의 복소수 출력 
```  
	return 0;
```  
- 0읇 반환하고 메인함수 종료  
# 실행 결과
<img width="808" height="228" alt="image" src="https://github.com/user-attachments/assets/d8473f07-1fb3-4db1-8b12-fbd7a9db2cd5" />

