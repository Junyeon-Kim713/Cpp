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
cout << "입력할 실수의 개수를 입력하세요: ";
```
- 도움말 출력, cout 표준 출력 스트림 객체, << 스트림 삽입 연산자  
```cpp
int n;
cin >> n;
```
- 입력받을 개수를 저장할 변수 n 선언 및 키보드로부터 값을 입력받고 n에 저장, cin 표준 입력 스트림 객체, >> 스트림 추출 연산자
```cpp
cout << n << "개의 실수를 입력하세요." << endl;
```
- 도움말 출력, cout 표준 출력 스트림 객체, << 스트림 삽입 연산자, endl 버퍼를 비우고 줄바꿈
```cpp
double* p = new double[n];
```
- 실수형 포인터 선언 및 new 연산자를 통해 힙공간에 실수형 배열 공간 동적 할당
```cpp
if (!p) {
  cout << "메모리를 할당할 수 없습니다.";
  return -1;
}
```
- 메모리 할당 체크, 메모리 할당 실패 시 NULL을 반환하므로 !0은 참이고 if문 실행
```cpp
for (int i = 0; i < n; i++)
{
  cin >> p[i];
}
```
- 키보드로부터 실수 입력받고 배열에 저장하는 for문
```cpp
double max;
max = p[0];
```
- 최댓값을 저장하기 위한 변수 max 선언 및 배열의 첫번째 원소로 초기화
```cpp
for (int i = 1; i < n; i++)
{
  if (max < p[i])
  max = p[i];
}
```
- 최댓값을 구하는 for문 선언, max보다 배열의 원소의 값이 더 크면 max 갱신
```cpp
delete [] p;
```
- 용도를 다한 메모리 반환
```cpp
cout << "최댓값은 " << max << "입니다." << endl;
```
- 최댓값 출력
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
<img width="809" height="365" alt="스크린샷 2026-04-06 234055" src="https://github.com/user-attachments/assets/754a3dd2-b588-4f1a-a783-c4206278807c" />

