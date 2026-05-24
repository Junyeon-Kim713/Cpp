# 소스코드 설명  
```cpp
#include <iostream>
using namespace std;
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
class Rectangle {
```
- Rectangle 클래스 선언 시작
```cpp
	int width;
	int height;
```
- private로 멤버변수 width, height 선언
```cpp
public:
	Rectangle(int w, int h) {
		width = w;
		height = h;
	}
	Rectangle(int w) : Rectangle(w, 1) {}
	Rectangle() : Rectangle(1, 1) {}
	void show() {
		cout << "사각형의 폭은 " << width << "높이는 " << height << endl;
	}
};
```
- 접근지정자 public으로 멤버함수 선언
- 함수 중복으로 생성자 선언, 매개변수의 갯수를 다르게 선언해 다양한 형태의 초깃값 전달 가능
- 객체의 멤버변수를 출력하는 멤버함수 show() 선언 및 인라인 함수로 정의
```cpp
int main() {
```
- 메인함수 시작
```cpp
	Rectangle rect0;
	rect0.show();
```
- 인자를 전달하지 않고 Rectangle 클래스 객체 rect0 생성
- show() 함수 호출하여 rect0의 멤버변수 값 확인  
```cpp
	Rectangle rect1(10);
	rect1.show();
```  
- 인자를 하나만 전달하여 Rectangle 클래스 객체 rect1 생성
- show() 함수 호출하여 rect1의 멤버변수 값 확인
```cpp
	Rectangle rect2(10, 20);
	rect2.show();
```
- 인자를 두개 전달하여 Rectangle 클래스 객체 rect2 생성
- show() 함수 호출하여 rect2의 멤버변수 값 확인
```cpp
return 0;
}
```
# 실행결과  
<img width="794" height="206" alt="image" src="https://github.com/user-attachments/assets/33c87adb-1d3e-4a6e-b9c6-2d081c1b08dd" />
