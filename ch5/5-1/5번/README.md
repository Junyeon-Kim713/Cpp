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
string GetMaxString(string* str);
```
- 사전 편찬 순서 상 가장 뒤에 나오는 문자열의 string 객체를 반환하는 함수 선언, string 객체 포인터를 매개변수로 선언
```cpp
int main() {
```
- 메인함수 시작
```cpp
string names[5];
```
- 크기가 5인 string 객체 배열 선언
```cpp
string res;
```
- 함수의 리턴값을 받을 string 객체 res 생성
```cpp
for (int i = 0; i < 5; i++) {
```
- 배열의 원소인 string 객체들을 초기화 하기위한 for문 선언
```cpp
cout << "이름 >> ";
getline(cin, names[i], '\n');
}
```
- 도움말 출력 및 getline 함수로 문자열을 입력받아 각 인덱스의 string 객체에 저장, for문 끝
```cpp
res = GetMaxString(names);
```
- 배열명을 인자로 함수 호출 및 리턴값 res에 대입
```cpp
cout << "사전에서 가장 뒤에 나오는 문자열은 " << res << endl;
}
```
- 결과 출력 및 메인함수 종료
```cpp
string GetMaxString(string* str)
{
```
- GetMaxString 함수 정의 시작
```cpp
string* max = str;
```
- string 객체 포인터 max를 선언하고 배열의 첫번째 주소인 배열명으로 초기화.
```cpp
for (int i = 1; i < 5; i++)
{
	if (*max < str[i])
		max = &str[i];
}
```
- 문자열 비교를 위한 for문 선언
- max가 가리키는 객체의 문자열보다 str[i]의 문자열이 더 크면 max 값 str[i]의 주소로 갱신
```cpp
return *max;
```
- max가 가리키는 객체 리턴
# 실행 결과
<img width="796" height="288" alt="스크린샷 2026-05-09 222521" src="https://github.com/user-attachments/assets/87087baf-4dc2-422f-836a-0513e0885f8e" />

