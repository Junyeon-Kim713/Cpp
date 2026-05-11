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
void Uppercase(string& str);
```
- string 객체의 문자열을 대문자로 바꾸는 함수 선언 소스코드 설명  
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
void Uppercase(string& str);
```
- string 객체의 문자열을 대문자로 바꾸는 함수 선언, 매개변수 참조 변수로 선언
```cpp
int main() {
```
- 메인함수 시작
```cpp
string s1("hello");
```
- string 객체 s1 생성 및 문자열 상수로 초기화
```cpp
cout << "변환전 문자열" << s1 << endl;
```
- 함수 호출 전 s1의 문자열 출력
```cpp
Uppercase(s1);
```
- 함수 호출, s1을 인자로 전달
```cpp
cout << "변환후 문자열" << s1 << endl;
```
- 함수 호출 후 s1의 문자열 출력
```cpp
return 0;
}
```
- 0을 반환하고 메인함수 종료
```cpp
void Uppercase(string& str)
{
```
- Uppercase 함수 정의 시작
```cpp
for(int i=0;i<str.length();i++)
{
```
- 문자열의 각 문자에 접근하기 위한 for문 선언
```cpp
str[i] = toupper(str[i]);
}
```
- 문자열의 각 인덱스의 문자를 대문자로 변환
# 실행 결과  
<img width="808" height="165" alt="스크린샷 2026-05-12 012153" src="https://github.com/user-attachments/assets/d60d047e-688f-4c2b-a9f2-54247238556a" />
