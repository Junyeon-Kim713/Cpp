# 소스코드 설명  
```cpp
#include <iostream>
```
- cin, cout등 라이브러리 객체의 선언을 담은 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
class Triangle {
```
- Triangle 클래스 선언
```cpp
public:
	int width, height;
	Triangle();
	Triangle(int a, int b);
	~Triangle();
	double getArea();
};
```
- public 접근지정자로 멤버변수, 생성자, 소멸자, 멤버함수 선언
```cpp
Triangle::Triangle() : Triangle(1, 1) {}
```
- 위임 생성자 정의, 타겟 생성자를 통해서 초기화
```cpp
Triangle::Triangle(int a, int b) : width(a), height(b)
{
	cout << "밑변 " << width << "높이 " << height << "인 삼각형 생성" << endl;
}
```
- 타겟 생성자 정의, 멤버 초기화 리스트를 통해 초기화, 객체 생성주기 시작을 증명하는 출력문 선언
```cpp
Triangle::~Triangle() {
	cout << "밑변 " << width << "높이 " << height << "인 삼각형 소멸" << endl;
}
```
- 소멸자 정의, 객체 생성주기 종료를 증명하는 출력문 선언
```cpp
double Triangle::getArea() {
	return 0.5 * width * height;
}
```
- 멤버함수 정의, 삼각형의 면적 리턴
```cpp
Triangle globalTri1(4, 8);
Triangle globalTri2(2, 2);
```
- 전역 객체 생성, 프로그램 실행 후 메인함수 실행 전 생성됨
```cpp
int main()
```
- 메인함수 시작
```cpp
cout << "삼각형의 면적은 " << globalTri1.getArea() << endl;
cout << "삼각형의 면적은 " << globalTri2.getArea() << endl;
```
- 삼각형의 면적 출력, 멤버함수의 호출을 피연산자로 사용
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
- <img width="807" height="304" alt="스크린샷 2026-03-25 010056" src="https://github.com/user-attachments/assets/2720a9dd-a2bf-43c1-972c-3127ed5bdb09" />
- 실습과제 2와 실행결과가 다른 이유는 전역객체는 지역 객체와 다르게 프로그램 실행 후 메인함수 실행 전에 생성되기 때문에 먼저 객체들의 생성자가 호출된다.
