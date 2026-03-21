# 소스코드 설명  
```cpp
﻿#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
int main()
```
- 메인함수 시작
```cpp
char text[100];
```
- 문자열을 저장할 배열 선언
```cpp
cout << "빈칸 없이 문자열을 입력하세요>> ";
```
- 도움말 출력, cout 표준 출력 스트림 객체, << 스트림 삽입 연산자
```cpp
cin >> text;
```
- 키보드로부터 문자열을 입력받아 text 배열에 저장, cin 표준 입력 스트림 객체, >> 스트림 추출 연산자
```cpp
int i = 0;
```
- 배열의 인덱스 표현을 위한 변수 i 선언
```cpp
while (text[i] != '\0')
```
- 배열에 저장된 널문자에 도달할 때까지 반복하는 while문 선언
```cpp
cout << text[i] << ' ';
```
- 화면에 배열의 각 인덱스에 저장된 문자 출력, cout 표준 출력 스트림 객체, << 스트림 삽입 연산자
```cpp
i++;
```
- 화면에 문자 출력 후 다음 인덱스로 접근하기 위한 i값 증가
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행 결과
- <img width="801" height="168" alt="image" src="https://github.com/user-attachments/assets/0903fedc-06c1-4c82-863e-024c7b6f7217" />
