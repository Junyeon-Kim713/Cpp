# 소스코드 설명  
```cpp
#include <iostream>
```
- cin, cout 등의 라이브러리 객체의 선언을 담은 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
class Triangle {
```
- Triangle 클래스 선언# 소스코드 설명  
```cpp
#include <iostream>
```
- cin, cout 등의 라이브러리 객체의 선언을 담은 헤더파일 포함
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
	int width;
	int height;
```
- 접근지정자 private로 멤버변수 선언
```cpp
public:
```
- 접근지정자 public으로 지정, 이후에 나오는 멤버는 public
```cpp
  Triangle() { width = 1; height = 1; }
	Triangle(int w, int h) {
		width = w; height = h;
		cout << "폭 " << width << "높이 " << height << "인 삼각형 생성" << endl;
	}
```
- 생성자 정의, 자동 인라인함수로 정의, 기계어 수준에서 함수 호출문과 치환됨
```cpp
	~Triangle() {
		cout << "폭 " << width << "높이 " << height << "인 삼각형 소멸" << endl;
	}
```
- 소멸자 정의, 객체의 소멸을 증명하는 문구 작성, 메인함수 종료와 함께 호출
```cpp
	void setWidth(int w) {
		if (w <= 0)
			cout << "양수를 입력하시오" << endl;
		else
			width = w;
	}
```
- 멤버함수 자동 인라인함수로 정의, 기계어 수준에서 함수 호출문과 치환됨, 양수값 들어오면 width에 저장
```cpp
void setHeight(int h) {
		if (h <= 0)
			cout << "양수를 입력하시오" << endl;
		else
			height = h;
	}
	double getArea() {
		return 0.5 * width * height;
	}
```
- 멤버함수 자동 인라인함수로 정의, 기계어 수준에서 함수 호출문과 치환됨, 양수값 들어오면 height에 저장
```cpp
int main()
```
- 메인함수 시작
```cpp
Triangle tri;
```
- tri객체 생성, 인자가 없는 생성자 호출
```cpp
tri.setWidth(3);
```
- setter 함수를 통한 변수값 변경
```cpp
tri.setHeight(5);
```
- setter 함수를 통한 변수값 변경
```cpp
cout << "삼각형의 면적은" << tri.getArea() << endl;
```
- 삼각형의 면적을 화면에 출력, getter 함수를 피연산자로 사용
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
<img width="799" height="177" alt="스크린샷 2026-03-30 181637" src="https://github.com/user-attachments/assets/492cc779-1f7b-49b1-b1b2-296335c629bb" />


