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
private:
	int width;
	int height;
```
- 접근 지정자 private로 멤버 변수 선언
```cpp
public:
```
- 접근 지정자 public으로 지정, 이후 나오는 멤버는 public
```cpp
Triangle() { width = 1; height = 1; }
```
- 인자가 없는 생성자 선언 및 인라인 함수로 정의
```cpp
  Triangle(int w, int h) {
		width = w; height = h;
		cout << "폭 " << width << "높이 " << height << "인 삼각형 생성" << endl;
	}
```
- 인자가 있는 생성자 선언 및 인라인 함수로 정의
```cpp
	  ~Triangle() {
		cout << "폭 " << width << "높이 " << height << "인 삼각형 소멸" << endl;
	}
```
- 소멸자 선언 및 인라인 함수로 정의
```cpp
	void setWidth(int w) {
		if (w <= 0)
			cout << "양수를 입력하시오" << endl;
		else
			width = w;
	}
```
- width의 값을 설정하는 setter 함수 선언 및 인라인 함수로 정의
```cpp
	void setHeight(int h) {
		if (h <= 0)
			cout << "양수를 입력하시오" << endl;
		else
			height = h;
	}
```
- height의 값을 설정하는 setter 함수 선언 및 인라인 함수로 정의
```cpp
	double getArea() {
		return 0.5 * width * height;
	}

};
```
- 삼각형의 넓이를 리턴하는 getter 함수 선언 및 인라인 함수로 정의, 클래스 선언 종료
```cpp
int main()
```
- 메인함수 시작
```cpp
Triangle tri;
```
- 인자가 없는 객체 생성
```cpp
Triangle* p;
```
- 객체 포인터 선언
```cpp
p = &tri;
```
- 객체 포인터에 tri의 주소값 저장  
```cpp
(*p).setWidth(3);
```
- 객체 포인터를 이용한 멤버함수 호출
```cpp
p->setHeight(5);
```
- 객체 포인터를 이용한 멤버함수 호출
```cpp
cout << "삼각형의 면적은" << p->getArea() << endl;
```
- 화면에 삼각형의 면적 출력, 객체 포인터를 이용한 멤버함수 호출
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
<img width="807" height="176" alt="image" src="https://github.com/user-attachments/assets/6d68ad25-7646-495e-9f20-a0561ce1ed9d" />
