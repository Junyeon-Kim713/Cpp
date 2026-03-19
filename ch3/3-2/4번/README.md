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
class Rectangle {
```
- 클래스 선언 시작
```cpp
int x, y, width, height;
```
- 멤버 변수 private로 선언
```cpp
public:
```
- public 접근 지정자 선언, 아래에 나오는 멤버를 모든 객체에서 접근 가능하게함
```cpp
Rectangle();
	Rectangle(int x, int y);
	Rectangle(int x, int y, int width, int height);
	int get_Area();
	int get_Perimeter();
	void get_Coord();
};
```
- 생성자, 멤버 함수 선언/ 생성자를 3개의 경우로 나눔
```cpp
Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
```
- 위임 생성자 정의, 인자가 없는 객체 생성 시 타겟 생성자를 이용하여 멤버 변수 초기화
```cpp
Rectangle::Rectangle(int x, int y) : Rectangle(x, y, 1, 1) {}
```
- 위임 생성자 정의, 인자가 2개인 객체 생성 시 타겟 생성자를 이용하여 나머지 멤버 변수 초기화
```cpp
Rectangle::Rectangle(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {}
```
- 타겟 생성자 정의, 인자가 4개인 객체 생성 시 멤버 초기화 리스트를 통해 초기화 수행
```cpp
int Rectangle::get_Area() {
	return width * height;
}
```
- 멤버 함수 정의, 함수 호출 시 사각형의 면적 리턴
```cpp
int Rectangle::get_Perimeter() {
	return 2 * (width + height);
}
```
- 멤버 함수 정의, 함수 호출 시 사각형의 둘레 리턴
```cpp
void Rectangle::get_Coord() {
	cout << "(" << x + width << "," << y - height << ")" << endl;
}
- 멤버 함수 정의, 함수 호출 시 사각형의 우측하단 좌표값 출력, cout은 표준 출력 스트림 객체, << 스트림 삽입 연산자, endl 줄바꿈 및 버퍼 비움 수행  
```cpp
int main() {
```
- 메인함수 시작
```cpp
Rectangle rect1;
Rectangle rect2(3, 5);
Rectangle rect3(3, 5, 2, 4);
```
- Rectangle 클래스 객체 생성, 인자가 없는 객체, 인자가 2개인 객체, 인자가 4개인 객체 생성
```cpp
cout << "rect1의 면적은 " << rect1.get_Area() << endl;
```
- 객체 rect1의 면적 출력, 멤버함수 호출 후 리턴값을 인자로 전달, cout은 표준 출력 스트림 객체, << 스트림 삽입 연산자, endl 줄바꿈 및 버퍼 비움 수행
```cpp
cout << "rect2의 둘레는 " << rect2.get_Perimeter() << endl;
```
- 객체 rect2의 둘레 출력, 멤버함수 호출 후 리턴값을 인자로 전달, cout은 표준 출력 스트림 객체, << 스트림 삽입 연산자, endl 줄바꿈 및 버퍼 비움 수행
```cpp
cout << "rect3의 우측하단의 좌표는 ";
rect3.get_Coord();
```
- 객체 rect3의 우측하단 좌표 출력, 함수의 리턴값이 void이고 함수 내부에서 출력을 수행하므로 ;으로 구분 후 작성, cout은 표준 출력 스트림 객체, << 스트림 삽입 연산자, endl 줄바꿈 및 버퍼 비움 수행
```cpp
  return 0;
}
```
- 0을 반환하고 메인함수 종료

# 실행 결과
- <img width="805" height="198" alt="스크린샷 2026-03-19 225042" src="https://github.com/user-attachments/assets/a1288fd9-0070-40f6-b968-7dc60ec25224" />
