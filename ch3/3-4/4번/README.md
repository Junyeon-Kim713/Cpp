# 소스코드 설명  
```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 선언
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
class Triangle {
```
- Triangle 클래스 선언
```cpp
private:
	int width, height;
```
- 접근 지정자 private로 선언 후 멤버 변수 선언
```cpp
public:
	Triangle();
	Triangle(int w);
	Triangle(int w, int h);
	~Triangle();
	void setW(int w);
	void setH(int h);
	int getW();
	int getH();
	double getA();
};
```
- 생성자, 소멸자, setter 함수, getter 함수 선언
```cpp
Triangle::Triangle() : Triangle(1, 1) {}
```
- 위임생성자 정의, 인자가 없는 객체 생성 시 타겟 생성자를 통해 초기화
```cpp
Triangle::Triangle(int w) : Triangle(w, 1) {}
```
- 위임생성자 정의, 인자가 하나인 객체 생성 시 타겟 생성자를 통해 초기화
```cpp
Triangle::Triangle(int w, int h) {
	if (w <= 0 || h <= 0)
	{
		cout << "길이는 양수이어야함 대신에 폭1, 높이1 삼각형 생성" << endl;
		width = 1;
		height = 1;
	}
	else
		width = w;
		height = h;
}
```
- 타겟 생성자 정의, 잘못된 인자 전달을 방지하는 예외처리문 작성
```cpp
Triangle::~Triangle() {
	cout << "폭: " << width << ", 길이: " << height << " 삼각형 소멸" << endl;
}
```
- 소멸자 정의, 객체의 소멸을 증명하는 출력문 작성
```cpp
void Triangle::setW(int w)
{
	if (w <= 0)
		cout << "폭은 양수이어야함" << endl;
	else
	{
		width = w;
	}
}
```
- width에 접근하는 setter 함수 정의, 잘못된 인자 전달을 방지하는 예외처리문 작성
```cpp
void Triangle::setH(int h)
{
	if (h <= 0)
		cout << "높이는 양수이어야함" << endl;
	else
	{
		height = h;
	}
}
```
- height에 접근하는 setter 함수 정의, 잘못된 인자 전달을 방지하는 예외처리문 작성
```cpp
int Triangle::getW()
{
	return width;
}
```
- width에 접근하는 getter 함수 정의, width 리턴
```cpp
int Triangle::getH()
{
	return height;
}
```
- height에 접근하는 getter 함수 정의, height 리턴
```cpp
double Triangle::getA()
{
	return 0.5 * width * height;
}
```
- 넓이를 반환하는 getter 함수 정의, 넓이 값 연산 후 리턴
```cpp
int main()
```
- 메인함수 시작
```cpp
Triangle tri(-10, -5);
```
- 잘못된 인자를 전달하는 객체 생성
```cpp
tri.setW(-3);
```
- width의 값을 설정하는 setter함수 호출, 잘못된 인자를 전달
```cpp
tri.setH(-5);
```
- height의 값을 설정하는 setter함수 호출, 잘못된 인자를 전달
```cpp
tri.setW(3);
```
- width의 값을 설정하는 setter 함수 호출, 옳은 인자를 전달
```cpp
tri.setH(5);
```
- height의 값을 설정하는 setter 함수 호출, 옳은 인자를 전달
```cpp
cout << "삼각형의 폭은" << tri.getW() << endl;
```
- width의 값을 리턴하는 getter함수 호출, 삼각형의 폭 출력
```cpp
cout << "삼각형의 높이는" << tri.getH() << endl;
```
- height의 값을 리턴하는 getter함수 호출, 삼각형의 높이 출력
```cpp
cout << "삼각형의 넓이는" << tri.getA() << endl;
```
- 넓이을 리턴하는 함수 호출, 삼각형의 넓이 출력
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행 결과
<img width="839" height="326" alt="스크린샷 2026-03-26 200706" src="https://github.com/user-attachments/assets/0faf93a0-e2fc-4129-ae04-314bd0b152be" />

