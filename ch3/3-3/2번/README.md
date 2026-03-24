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
- public 접근지정자로 멤버 변수, 생성자, 소멸자, 멤버함수 선언
```cpp
Triangle::Triangle() : Triangle(1,1) {}
```
- 위임 생성자 정의, 인자 없는 객체 생성 시 타겟 생성자를 통해 멤버 변수 초기화
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
- 멤버함수 정의, 삼각형의 면적을 리턴
```cpp
int main()
```
- 메인함수 시작
```cpp
Triangle tri1;
```
- 지역객체 생성
```cpp
cout << "삼각형의 면적은 " << tri1.getArea() << endl;
```
- 삼각형의 면적 출력, 함수 호출을 피연산자로 사용
```cpp
Triangle tri2(2, 4);
```
- 인자를 갖는 객체 생성
```cpp
cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```
- 삼각형의 면적 출력, 함수 호출을 피연산자로 사용
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
- <img width="802" height="297" alt="스크린샷 2026-03-25 004624" src="https://github.com/user-attachments/assets/d7dae3cc-af5c-434f-90fe-4ae445f86ff6" />
