# 소스코드 설명  
```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
class Sphere {
```
- Sphere 클래스 선언
```cpp
public:
	int radius;
	Sphere();
	Sphere(int r); 
	~Sphere();
	double getVolume();
  };
```
- 접근지정자 public 상태로 멤버변수, 생성자, 소멸자, 멤버함수 선언
```cpp
Sphere::Sphere() : Sphere(1) {}
```
- 위임생성자 정의, 타겟 생성자를 이용해서 초기화
```cpp
Sphere::Sphere(int r) : radius(r)
{
	cout << "반지름 " << radius << "인 구 생성\n"; 
}
```
- 타겟 생성자 정의, 멤버 초기화 리스트를 통한 초기화, 객체 생명주기 시작을 증명하는 출력문 선언
```cpp
Sphere::~Sphere() {
	cout << "반지름 " << radius << "인 구 소멸\n";
}
```
- 소멸자 정의, 객체 생명주기 소멸을 증명# 소스코드 설명  
```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
class Sphere {
```
- Sphere 클래스 선언
```cpp
public:
	int radius;
	Sphere();
	Sphere(int r); 
	~Sphere();
	double getVolume();
  };
```
- 접근지정자 public 상태로 멤버변수, 생성자, 소멸자, 멤버함수 선언
```cpp
Sphere::Sphere() : Sphere(1) {}
```
- 위임생성자 정의, 타겟 생성자를 이용해서 초기화
```cpp
Sphere::Sphere(int r) : radius(r)
{
	cout << "반지름 " << radius << "인 구 생성\n"; 
}
```
- 타겟 생성자 정의, 멤버 초기화 리스트를 통한 초기화, 객체 생명주기 시작을 증명하는 출력문 선언
```cpp
Sphere::~Sphere() {
	cout << "반지름 " << radius << "인 구 소멸\n";
}
```
- 소멸자 정의, 객체 생명주기 종료을 증명하는 출력문 선언
```cpp
double Sphere::getVolume(){ 
	return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}
```
- 멤버함수 정의, 구의 부피를 리턴
```cpp
Sphere globalsph1(10);
```
- 10을 인자로 갖는 전역객체 생성, 프로그램 실행 후 메인함수 실행 전 생성
```cpp
Sphere globalsph2(20);
```
- 20을 인자로 갖는 전역객체 생성, 프로그램 실행 후 메인함수 실행 전 생성
```cpp
int main() {
```
-  메인함수 시작
```cpp
cout << "구의 부피는 " << globalsph1.getVolume() << "\n";
cout << "구의 부피는 " << globalsph2.getVolume() << "\n";
```
- 구의 부피를 구하는 함수를 호출하고 출력하는 출력문 선언, 함수의 호출을 피연산자로 사용
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과  
- <img width="808" height="302" alt="스크린샷 2026-03-25 014558" src="https://github.com/user-attachments/assets/0b25e5a7-10ea-4416-873a-8c8d65194bc8" />
- 실습과제 4와 다르게 전역객체는 프로그램 실행 후 메인함수가 실행되기 전에 생성되어 생성자를 호출하므로 실습과제 4번과 다르게 결과가 나온다.
