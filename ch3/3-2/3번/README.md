# 소스코드 설명  
```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 iostream 포함
```cpp
using namespace std;
```
- std 이름 공간에 선언된 모든 이름에 std 생략
```cpp
class Sphere {
```
- 클래스 선언 시작
```cpp
int r;
```
- 멤버 변수 private로 선언
```cpp
public:
```
- public 접근지정자 선언, 아래에 나오는 멤버는 모든 객체에서 접근 가능
```cpp
  Sphere();
	Sphere(int a);
	double get_Volume();
};
```
- 인자가 없는 객체 생성자, 인자가 있는 객체 생성자, 멤버 함수 선언/ 클래스 선언부 종료
```cpp
Sphere::Sphere() : Sphere(1) {}
```
- 위임 생성자 정의, 인자가 없는 객체 생성시 타겟 생성자를 이용해서 멤버변수 초기화
```cpp
Sphere::Sphere(int a) : r(a) {}
```
- 타겟 생성자 정의, 인자가 있는 객체 생성시 변수 초기화 리스트를 통한 초기화 수행
```cpp
double Sphere::get_Volume() {
	return (4.0 / 3.0) * 3.14 * r * r * r;
}
```
- 멤버 함수 정의, 멤버함수 호출 시 구의 부피값 연산 후 리턴, (4/3)으로 작성 시 자동으로 int 형에 데이터를 저장하기 때문에 정수로 표현되어 소수점 날아감.
```cpp
int main() {
```
- 메인함수 시작
```cpp
Sphere sph1;
```
- 인자가 없는 객체 sph1 생성
```cpp
cout << "구의 부피는" << sph1.get_Volume() << endl;
```
- 구의 부피값 출력, 멤버 함수의 리턴값을 인자로 넘김, cout은 표준 출력 스트림 객체, << 스트림 삽입 연산자, endl은 줄바꿈 수행 및 버퍼를 비움
```cpp
Sphere sph2(3);
```
- 인자가 있는 객체 sph2 생성
```cpp
cout << "구의 부피는" << sph2.get_Volume() << endl;
```
- 구의 부피값 출력, 멤버 함수의 리턴값을 인자로 넘김, cout은 표준 출력 스트림 객체, << 스트림 삽입 연산자, endl은 줄바꿈 수행 및 버퍼를 비움
```cpp
  return 0;
}
```
- 0을 반환하고 메인함수 종료
