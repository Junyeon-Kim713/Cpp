# 소스코드 설명
```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
class Triangle {
```
- 클래스 선언 시작
```cpp
int width, height;
```
- 멤버 변수 private로 선언
```cpp
public:
```
- 아래에 나오는 멤버들은 모든 객체에서 접근이 가능하도록 public 접근지정자 선언
```cpp
  Triangle();
	Triangle(int a, int b);
	double get_Area();
};
```
- 생성자 및 멤버 함수 선언, 클래스 선언부 종료
```cpp
Triangle::Triangle() : Triangle(1, 1) {}
```
- 위임생성자(타겟 생성자를 호출하여 구현), 인자가 없는 객체 생성자 정의 , 멤버변수를 모두 1로 초기화
```cpp
Triangle::Triangle(int a, int b) : width(a), height(b) {}
```
- 타겟 생성자 정의, 멤버 초기화 리스트를 이용하여 초기화
```cpp
double Triangle::get_Area() {
	return width * height * 0.5; 
}
```
- 멤버 함수 정의, 호출 시 삼각형의 면적 리턴
```cpp
int main() {
```
- 메인함수 시작
```cpp
Triangle tri1;
```
- tri1 객체 생성
```cpp
cout << "삼각형의 면적은 " << tri1.get_Area() << endl;
```
- tri1 삼각형의 면적 출력, cout은 표준 출력 스트림 객체, << 스트림 삽입 연산자, endl : 줄바꿈 수행, 버퍼를 비움
```cpp
Triangle tri2(2, 4);
```
Triangle tri2(2, 4); 
```
- 인자를 전달하는 tri2 객체 생성
```cpp
cout << "삼각형의 면적은 " << tri2.get_Area() << endl;
```
- tri2 삼각형의 면적 출력, cout은 표준 출력 스트림 객체, << 스트림 삽입 연산자, endl : 줄바꿈 수행, 버퍼를 비움
```cpp
return 0;
}
```
- 0을 반환하고 메인함수 종료
  
