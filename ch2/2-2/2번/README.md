# 소스코드 설명

```cpp
﻿#include <iostream>
```
- cin, cout 등의 라이브러리 객체의 선언이 담긴 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
void get_X(int* ptr);
```
- 정수 x를 입력받는 동작을 수행하는 함수 get_X 선언
```cpp
void f(int x);
```
- 이차함수 x^2 +2x -5에 값을 대입하고 연산해 화면에 출력하는 함수 f 선언
```cpp
int main()
```
- 메인함수 시작
```cpp
int x;
```
- 입력받을 정수를 저장할 변수 x 선언
```cpp
get_X(&x);
```
- 정수 x를 입력받는 함수 get_X 호출, 인자로 변수 x의 주소를 전달
```cpp
f(x);
```
- 이차함수 x^2 +2x -5에 값을 대입하고 화면에 출력하는 함수 f 호출
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
```cpp
void get_X(int* ptr)
```
- 함수 get_X 정의 시작
```cpp
cout << "정수 x를 입력하시오 :";
```
- 도움말 출력, cout 표준 출력 스트림 객체, << 스트림 삽입 연산자
```cpp
cin >> *ptr;
```
- 포인터 변수와 간접참조 연산자 *를 이용해 변수 x의 값 변경, cin 표준 입력 스트림 객체, >> 스트림 추출 연산자
```cpp
void f(int x)
```
- 이차함수에 값을 대입해 연산을 하고 화면에 출력하는 함수 f 정의 시작
```cpp
cout << "x = " << x << "일때 y의 값은 " << x * x + 2 * x - 5 << "입니다." << endl;
```
- cout 표준 출력 스트림 객체, << 스트림 삽입 연산자, endl 줄바꿈 및 버퍼 비움 수행
# 실행결과
- <img width="806" height="152" alt="image" src="https://github.com/user-attachments/assets/2b16cef3-c329-4466-a05e-18cd14f209b6" />
