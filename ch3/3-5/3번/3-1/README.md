# 소스코드 설명  
```cpp
#define _CRT_SECURE_NO_WARNINGS
```
- 문자열 함수 보안오류를 해결하는 문구 삽입  
```cpp
#include <iostream>
```
- cin, cout 등의 라이브러리 객체의 선언을 담은 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
class Picture {
```
- Picture 클래스 선언
```cpp
private:
	int width, height;
	char place[20];
```
- 접근지정자 private로 멤버 변수 선언
```cpp
public:
```
- 접근지정자 public으로 지정, 이후에 나오는 멤버는 public
```cpp
	Picture() {
		width = 5;
		height = 7;
		strcpy(place, "모름");
	}
```
- 인자가 없는 생성자 자동 인라인함수로 정의
```cpp
	Picture(int w, int h, const char* p) {
		width = w;
		height = h;
		strcpy(place, p);
	}
```
- 인자가 있는 생성자 정의, 매개변수의 값으로 멤버 변수 초기화, 읽기 전용 문자열 상수를 전달받으므로 const 추가
```cpp
	~Picture() {}
```
- 소멸자 정의
```cpp
	int getWidth() {
		return width;
	}
```
- getter 함수 자동 인라인 함수로 정의
```cpp
	int getHeight() {
		return height;
	}
```
- getter 함수 자동 인라인 함수로 정의
```cpp
	char* getPlace() {
		return place;
	}
```
- getter 함수 자동 인라인 함수로 정의, 문자열을 담은 배열의 첫번째 인덱스 주소를 반환하기에 반환형을 문자열 포인터형으로 지정
```cpp
int main()
```
- 메인함수 정의
```cpp
Picture pic;
```
- pic 객체 생성
```cpp
Picture mt(10, 14, "한라산");
```
- mt 객체 생성, 인자가 있는 객체 생성
```cpp
cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
```
- pic 객체의 정보를 화면에 출력
```cpp
cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;
```
- mt 객체의 정보를 화면에 출력
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과  
<img width="804" height="169" alt="스크린샷 2026-03-30 183313" src="https://github.com/user-attachments/assets/145ba6fb-24a3-4c7e-b800-9bc2370b1a89" />




