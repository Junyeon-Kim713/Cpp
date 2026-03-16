```cpp
#include <iostream>
```
- cin, cout 등의 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함
```cpp
using namespace std;
```
- 이름 공간 std 안에 선언된 모든 이름에 std:: 생략
```cpp
int main()
```
- 메인함수 시작
```cpp
for (int n = 0; n < 4; n++)
```
- 행의 인덱스를 위한 for문 선언 및 변수 n 선언
```cpp
for(int j=0; j<=i; j++)
```
- 문자 출력을 위한 중첩 for문 선언, 열의 인덱스를 위한 변수 j 선언
```cpp
cout << '*';
```
- 조건 만족 시 '*' 출력, cout은 표준 출력 스트림 객체, <<는 스트림 삽입 연산자
```cpp
cout << '\n';
```
- 한 행이 끝나면 줄바꿈 문자 출력, cout은 표준 출력 스트림 객체, <<는 스트림 삽입 연산자
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
