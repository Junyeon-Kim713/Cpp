# 소스코드 설명  
```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
```cpp
#include <string>
```
- string 클래스의 선언을 담은 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
int main()
{
```
- 메인함수 시작
```cpp
string result;
```
- string 클래스 객체 result 생성
```cpp
int i=1;
```
- 입력한 문자열의 순서를 나타낼 변수 i 선언 및 1로 초기화
```cpp
while (true)
	{
```
- 연속된 문자열 입력을 위한 무한루프 while문 선언
```cpp
string str;
```
- 입력받은 문자열을 임시로 저장할 string 클래스 객체 str 생성
```cpp
cout << "문자열 입력: ";
```
- 도움말 출력, cout 표준 출력 스트림 객체, 스트림 삽입 연산자 <<
```cpp
cin >> str;
```
- str에 문자열 입력, 버퍼에 \n이 남지만 cin은 남아있는 \n을 자동으로 무시하고 건너뜀, cin 표준 입력 스트림 객체, >> 스트림 추출 연산자
```cpp
if (str == "quit")
			break;
```
- 문자열 quit 입력 시 무한루프 탈출
```cpp
result += '<' + to_string(i) + '>' + str;
```
- result 객체에 입력받은 문자열을 덧붙임, to_string()함수를 통해 정수를 문자로 변경
```cpp
cout << "이어진 문자열: " << result << endl;
```
- result 객체에 저장된 문자열 출력
```cpp
i++;
}
```
- 입력한 문자열의 순서를 나타내는 i 증가 및 무한루프 while문 끝
```cpp
return 0;
}
```
- 0을 반환하고 메인함수 종료


 
