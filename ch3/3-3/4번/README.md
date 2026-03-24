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
- public 접근지정자로 멤버변수, 생성자, 소멸자, 멤버함수 선언
```cpp
Sphere::Sphere() : Sphere(1) {}
```
- 위임 생성자 정의, 타겟 생성자를 호출하여 초기화
```cpp
Sphere::Sphere(int r) : radius(r)
{
	cout << "반지름 " << radius << "인 구 생성" << endl;
}
```
- 타겟 생성자 정의, 멤버 초기화 리스트를 통해 초기화, 객체 생성주기 시작을 증명하는 출력문 선언
```cpp
Sphere::~Sphere() {
	cout << "반지름 " << radius << "인 구 소멸" << endl;
}
```
- 소멸자 정의, 객체 생성주기 종료를 증명하는 출력문 선언
```cpp
double Sphere::getVolume() {
	return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}
```
- 멤버함수 정의, 구의 부피 리턴
```cpp
int main() {
```
- 메인함수 시작
```cpp
  Sphere sph1; 
  cout << "구의 부피는" << sph1.getVolume() << endl;
```
- 인자없는 객체 sph1 생성 및 부피 출력, 함수 호출을 피연산자로 사용
```cpp
  Sphere sph2(3); 
	cout << "구의 부피는" << sph2.getVolume() << endl;
```
- 인자를 갖는 객체 sph2 생성 및 부피 출력, 함수 호출을 피연산자로 사용
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행 결과
- <img width="791" height="296" alt="스크린샷 2026-03-25 011536" src="https://github.com/user-attachments/assets/cd35d889-b72d-485d-a2ee-1fa1ac0a8842" />
