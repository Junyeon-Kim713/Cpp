# 소스코드 설명  
```cpp
﻿#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 포함한 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
int main()
```
- 메인함수 시작
```cpp
int num;
char name[10];
char address[20];
```
- 학번, 이름, 주소를 저장할 변수 및 배열 선언
```cpp
cout << "학번을 입력하시오: ";
```
- 도움말 출력, cout 표준 출력 스트림 객체, << 스트림 삽입 연산자
```cpp
cin >> num;
```
- num 변수에 키보드로부터 입력된 값 저장, 키보드로 입력되는 값을 cin 객체의 스트림 버퍼에 저장하고 >> 연산자가 버퍼에서 값을 읽어 오른쪽 변수에 저장
```cpp
cout << "이름을 입력하시오: ";
cin >> name;
```
- 도움말 출력, 키보드로부터 입력된 문자열을 name 배열에 저장, 값을 cin 객체의 스트림 버퍼에 저장하고 >>연산자가 버퍼에서 값을 읽어 오른쪽 변수에 저장
```cpp
cin.ignore();
```
- 공백이 있는 문자열을 입력받기 전 버퍼에 남은 개행문자를 지움
```cpp
cout << "주소를 입력하시오: ";
cin.getline(address, sizeof(address), '\n');
```
- 도움말 출력, cin 객체의 멤버함수인 getline함수를 통해 공백이 있는 문자열 저장
```cpp
cout << "1. 학번: " << num << '\n' << "2. 이름: " << name << '\n' << "3. 주소: " << address << endl;
```
- 최종 결과 출력, cout 표준 출력 스트림 객체, << 스트림 삽입 연산자
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
- <img width="809" height="297" alt="image" src="https://github.com/user-attachments/assets/55a287c7-c570-4cd0-a3b9-63aa42b5c18c" />
