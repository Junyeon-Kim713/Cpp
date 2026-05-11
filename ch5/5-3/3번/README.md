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
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
void SwapString(string& refs1, string& refs2);
```
- 두 string 객체의 문자열을 교환하는 함수 선언, 참조 객체로 매개변수 선언
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
cout << "교환전 문자열" << s1 << ' ' << s2 << endl;
```
- 함수 호출 전 s1, s2 객체의 문자열 출력
```cpp
SwapString(s1, s2);
```
- SwapString 함수 호출, s1과 s2 인자로 전달
```cpp
cout << "교환후 문자열" << s1 << ' ' << s2 << endl;
```
- 함수 호출 후 s1과 s2의 문자열 출력
```cpp
return 0;
}
```
- 0을 반환하고 메인함수 종료
```cpp
void SwapString(string& refs1, string& refs2)
{
```
- SwapString 함수 정의 시작
```cpp
string temp;
```
- 문자열을 임시로 저장할 string 객체 temp 생성
```cpp
temp = refs1;
```
- temp에 참조 객체 refs1의 문자열 대입
```cpp
refs1 = refs2;
```
- 참조 객체 refs1에 참조 객체 refs2의 문자열 대입, 메인 함수에서 선언된 s1의 값이 변경됨
```cpp
refs2 = temp;
}
```
- 참조 객체 refs2에 객체 temp의 문자열 대입, 메인 함수에서 선언된 객체 s2의 값이 변경됨
- 함수 종료
# 실행 결과  
<img width="801" height="170" alt="image" src="https://github.com/user-attachments/assets/a78b1724-a82c-42ab-9a02-d23dcf536d44" />
