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
string GetLatterString(string* s1, string* s2);
```
- 사전 편찬 순서 상 뒤에 있는 문자열을 반환하는 함수 선언, 주소에 의한 호출로 객체의 메모리 주소값을 전달
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
string res;
```
- 함수에서 리턴받을 string 객체의 문자열을 저장할 string 객체 res 생성, res는 빈 문자열 상태
```cpp
res = GetLatterString(&s1, &s2);
```
- 함수 호출 및 반환된 string 객체의 문자열 res 객체에 대입
```cpp
cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
}
```
- 결과 출력 및 메인함수 종료
```cpp
 string GetLatterString(string* s1, string* s2)
{
```
- GetLatterString 함수 정의 시작
```cpp
	if (*s1 > *s2)
		return *s1;
	else
		return *s2;
}
```
- 간접 참조 연산자를 통해 s1과 s2의 문자열을 비교 후 더 큰 문자열의 string 객체 리턴
# 실행 결과
<img width="803" height="136" alt="스크린샷 2026-05-09 220006" src="https://github.com/user-attachments/assets/b0a557c1-7c31-464e-bf02-0f398cbc366f" />

