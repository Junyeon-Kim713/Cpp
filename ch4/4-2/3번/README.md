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
cout << "입력할 정수의 개수를 입력하세요: ";
```
- 도움말 출력, cout 표준 출력 스트림 객체, << 스트림 삽입 연산자
```cpp
int n;
cin >> n;
```
- 입력받을 정수의 개수를 저장할 변수 n 선언, 키보드로부터 값을 입력받고 n에 저장
```cpp
cout << n << "개의 정수를 입력하세요." << endl;
```
- 도움말 출력, cout 표준 출력 스트림 객체, << 스트림 삽입 연산자, endl 버퍼를 비우고 줄바꿈
```cpp
int* p = new int[n];
```
- new 연산자를 통해 정수형 배열을 위한 메모리 동적 할당 및 정수형 포인터 p에 할당한 메모리 주소 대입
```cpp
if (!p) {
  cout << "메모리를 할당할 수 없습니다.";
  return -1;
}
```
- 오류 방지 코드 작성, new 연산자는 메모리 할당 실패시 NULL을 리턴, NULL 리턴 시 !0은 참이므 안내문 출력 후 프로그램 종료
```cpp
double sum = 0;
```
- 정수의 합을 저장할 변수 sum 선언
```cpp
for (int i = 0; i < n; i++)
{
  cin >> *(p + i);
  sum += *(p + i);
}
```
- 키보드로부터 정수를 입력받고 배열에 저장 및 sum 변수에 더함.
```cpp
delete [] p;
```
- 더이상 메모리 공간이 필요하지 않으므로 메모리 반환
```cpp
cout << "평균값은 " << sum / n << "입니다." << endl;
```
- 평균값 출력
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
<img width="798" height="399" alt="스크린샷 2026-04-06 232855" src="https://github.com/user-attachments/assets/5da7bc30-8ecb-4fc4-aa1f-dd6b3e9ca173" />
