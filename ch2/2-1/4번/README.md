# 소스코드 설명  
```cpp
#include <iostream>
```
- cin, cout 등의 라이브러리 객체를 포함하고 있는 헤더파일 iostream을 포함
```cpp
using namespace std;
```
- std 이름 공간에 선언된 모든 이름에 std:: 생략
```cpp
int main()
```
- 메인함수 시작
```cpp
for (int i = 0; i < 7; i++)
```
- 행의 좌표를 표현하기 위한 변수 i 선언 및  for문 선언
```cpp
for (int j = 0; j < 7; j++)
```
- 열의 좌표를 표현하기 위한 변수 j 선언 및 for문 선언
```cpp
if (i + j == 6 || i == j)
```
- 화면에 *을 출력하기 위한 조건 설정
```cpp
cout << '*';
```
- 조건 만족 시 화면에 * 출력, cout은 화면에 출력해주는 객체, << 삽입연산자 함수
```cpp
else
				cout << ' ';
```
- 조건 불만족 시 공백 출력, cout은 화면에 출력해주는 객체, << 삽입연산자 함수
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
