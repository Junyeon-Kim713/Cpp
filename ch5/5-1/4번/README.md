# 소스코드 설명
```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언이 담긴 헤더파일 포함
```cpp
#include <string>
```
- string 객체의 선언이 담긴 헤더파일 포함
```cpp
using namespace std;
```
- std 이름 공간에 선언된 모든 이름에 std 생략
```cpp
void SwapString(string* s1, string* s2);
```
- 두 string 객체의 문자열을 교환하는 SwapString 함수 선언, string 객체 포인터를 매개변수로 선언
```cpp
int main() {
```
- 메인함수 시작
```cpp
string s1("hello");
```
- string 객체 s1 생성 및 문자열 상수로 초기화
```cpp
string s2("world");
```
- string 객체 s2 생성 및 문자열 상수로 초기화
```cpp
cout << "호출전 s1 : " << s1 << ", s2 : " << s2 << endl;
```
- 함수 호출 전 s1과 s2의 문자열 출력
```cpp
SwapString(&s1, &s2);
```
- s1과 s2의 주소를 인자로 함수 호출
```cpp
cout << "호출후 s1 : " << s1 << ", s2 : " << s2 << endl;
}
```
- 함수 호출 후 s1과 s2의 문자열 출력 및 메인함수 종료  
```cpp
void SwapString(string* s1, string* s2)
{
```
- SwapString 함수 정의 시작
```cpp
string temp;
```
- 임시로 문자열을 저장할 string 객체 temp 생성
```cpp
	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}
```
- 간접 참조 연산자를 통해 원본 s1, s2의 값 변경 및 함수 종료
# 실행 결과  
<img width="805" height="168" alt="스크린샷 2026-05-09 221211" src="https://github.com/user-attachments/assets/9de67d8a-e440-44fd-9e68-0bb1e4eb5c26" />


