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
- 위임생성자 정의, 인자가 1개인 경우 정의
```cpp
Triangle::Triangle(int w, int h) {
	if (w <= 0 || h <= 0)
	{
		cout << "양수를 입력하시오. (자동으로 길이 1로 저장됨.)" << endl;
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
Triangle::~Triangle() {}
```
- 소멸자 정의, 메인함수 종료와 함께 자동으로 호출
```cpp
void Triangle::setW(int w)
{
	if (w <= 0)
		cout << "양수를 입력하시오" << endl;
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
		cout << "양수를 입력하시오" << endl;
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
Triangle tri;
```
- tri 객체 생성
```cpp
tri.setW(3);
tri.setH(5);
```
- setter 함수를 통한 width, height 변수 값 변경
```cpp
cout << "삼각형의 폭은" << tri.getW() << endl;
cout << "삼각형의 높이는" << tri.getH() << endl;
cout << "삼각형의 넓이는" << tri.getA() << endl;
```
- 삼각형의 폭, 높이, 넓이 출력, getter함수를 통해 멤버변수 접근
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
<img width="803" height="189" alt="스크린샷 2026-03-26 195610" src="https://github.com/user-attachments/assets/b6ec5d2a-a7c4-4b61-8b45-5717c617d14e" />

