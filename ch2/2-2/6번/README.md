# 소스코드 설명  
```cpp
﻿#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
```cpp
#include <cstring>
```
- strcmp 등 c언어에서 문자열을 다루는 함수의 선언이 담긴 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
int main()
```
- 메인함수 시작
```cpp
char arr[100] = { 0 };
```
- 문자열을 입력받을 배열 선언 및 소스코드 설명  
```cpp
﻿#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
```cpp
#include <cstring>
```
- #include <cstring>
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
int main()
```
- 메인함수 시작
```cpp
char arr[100] = { 0 };
```
- 문자열을 입력받을 배열 선언 및 초기화
```cpp
int count = 0, i = 0;
```
- 단어의 개수를 저장할 변수 및 배열의 인덱스를 표현할 변수 선언 및 초기화
```cpp
while (1)
```
- 반복해서 단어를 입력받고 단어의 개수를 세기 위한 while 무한루프 선언
```cpp
count = 0;
i = 0;
```
- 새로운 루프를 돌 때마다 변수 0으로 초기화
```cpp
cout << "영문 텍스트를 입력하세요(빈칸 포함 가능)>> ";
```
- 도움말 출력
```cpp
cin.getline(arr, sizeof(arr), '\n');
```
- cin 객체의 getline 함수를 통해 배열에 문자열 저장
```cpp
if (strcmp(arr, "exit") == 0)
			break;
```
- 만약 사용자가 exit을 입력했다면 무한루프 탈출
```cpp
while (arr[i] != '\0')
```
- 널문자 전까지 반복하는 while문 선언
```cpp
if (arr[i] != ' ' && arr[i] != '\t')
				if (arr[i + 1] == ' ' || arr[i + 1] == '\t' || arr[i + 1] == '\0')
					count++;
```
- 단어의 갯수를 세기 위한 중첩if문 선언, 해당 인덱스의 문자가 구분문자가 아니고 그 다음 인덱스의 문자가 구분문자라면 카운팅
```cpp
i++;
```
- 다음 인덱스 접근을 위한 i증가
```cpp
cout << "단어의 개수는 " << count << "개이다.\n";
```
- 결과 출력
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
- <img width="914" height="330" alt="스크린샷 2026-03-22 012254" src="https://github.com/user-attachments/assets/cb5b2f7f-5ec3-4f53-ae26-65196d15caf7" />
