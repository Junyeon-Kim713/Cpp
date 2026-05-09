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
string GetLatterString(string s1, string s2);
```
- 사전 편찬 순서 상 뒤에 나오는 문자열을 반환하는 함수 선언, 값에 의한 호출로 객체 전달 
```cpp
int main() {
```
- 메인 함수 시작
```cpp
string s1("hello");
```
- string 객체 s1 생성 및 문자열 상수로 초기화
```cpp
string s2("world");
```
- string 객체 s2 생성 및 문자열 상수로 초기화
```cpp
string res;
```
- 함수에서 리턴받을 string 객체의 문자열을 저장할 string 객체 res 생성, res는 빈 문자열 상태
```cpp
res = GetLatterString(s1, s2);
```
- 함수 호출 및 리턴값 res에 대입
```cpp
cout << "사전에서 뒤에 나오는 문자열은" << res << "입니다." << endl;
```
- 결과 출력
```cpp
return 0;
}
```
- 0을 반환하고 메인함수 종료
```cpp
string GetLatterString(string s1, string s2)
{
```
- GetLatterString 함수 정의
```cpp
	if (s1 > s2)
		return s1;
	else
		return s2;
}
```
- s1과 s2를 비교 후 더 큰 문자열 리턴
# 실행 결과
<img width="799" height="137" alt="스크린샷 2026-05-09 214206" src="https://github.com/user-attachments/assets/4eb5d3fe-e899-460a-860b-2b4c7c0dce41" />

