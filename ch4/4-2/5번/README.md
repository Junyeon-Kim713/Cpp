# 소스코드 설명  
```cpp
﻿#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언이 담긴 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
int main()
```
- 메인함수 시작
```cpp
cout << "저장할 문자열의 크기를 입력하세요: ";
```
- 도움말 출력, cout 표준 출력 스트림 객체, >> 스트림 삽입 연산자
```cpp
int n;
cin >> n;
```
- 문자열의 크기를 저장할 변수 n 선언 및 키보드로부터 값을 입력받고 n에 저장, cin 표준 입력 스트림 객체, >> 스트림 추출 연산자
```cpp
cout << "문자열을 입력하시오: ";
```
- 도움말 출력
```cpp
char* p = new char[n+1];
```
- 문자형 포인터 p 선언 및 new 연산자를 통해 힙공간에 문자형 배열을 위한 메모리 공간 동적 할당 후 주소 포인터에 저장, 널문자 자리 확보를 위한 +1  
```cpp
if (!p) {
  cout << "메모리를 할당할 수 없습니다.";
  return -1;
}
```
- 메모리 할당 실패시 NULL을 반환하고 if문 실행, 안내문 출력 후 프로그램 종료
```cpp
cin.ignore();
```
- n의 값을 입력하고 버퍼에 남은 '\n' 제거
```cpp
cin.getline(p, n + 1);
```
- getline 함수를 통해 p가 가리키는 주소에 문자열 저장
```cpp
cout << "입력한 문자열은 " << p << "입니다." << endl;
```
- 화면에 문자열 출력, << 스트림 삽입 연산자가 p가 가리키는 주소에서부터 널문자가 나올 때까지 글자를 출력
```cpp
delete []p;
```
- 사용이 끝난 메모리 공간 delete 연산자를 통해 반환
```cpp
return 0;
```
- 0을 반환하고 메임함수 종료
# 실행 결과
<img width="798" height="202" alt="스크린샷 2026-04-07 000356" src="https://github.com/user-attachments/assets/ef4a45ca-3d19-40b5-9080-0a87ea23cb62" />
