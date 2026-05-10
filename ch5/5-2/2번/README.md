# 소스코드 설명
```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언이 담긴 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
void add2(int& value);
```
- 값을 +2하는 함수 add2 선언, 매개변수를 참조변수로 선언
```cpp
int main(void)
{
```
- 메인함수 시작
```cpp
int number;
```
- 정수를 저장할 정수형 변수 선언
```cpp
cout << "정수를 입력하세요 : ";
cin >> number;
```
- 도움말 출력, cout 표준 출력 스트림 객체, << 스트림 삽입 연산자
- number 변수에 저장할 정수 입력받음, cin 표준 입력 스트림 객체, >> 스트림 추출 연산자
```cpp
add2(number);
```
- add2 함수 호출 및 number 변수를 인자로 전달
```cpp
cout << "2만큼 증가한 값 :" << number << endl;
```
- 결과 출력, cout 표준 출력 스트림 객체, << 스트림 삽입 연산자, endl 버퍼를 비우고 줄바꿈
```cpp
return 0;
}
```  
- 0을 반환하고 메인 함수 종료
```cpp
void add2(int& value)
{
```
- add2 함수 정의 시작
```cpp
value += 2;
}
```
- 참조변수를 이용한 연산, 메인함수의 원본 변수의 값에 +2 적용됨
- 함수 종료
# 실행 결과
<img width="811" height="178" alt="스크린샷 2026-05-10 134838" src="https://github.com/user-attachments/assets/1864dddd-1d4c-4fea-ae63-68a0854b4dd3" />
