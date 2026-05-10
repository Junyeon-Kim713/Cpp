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
void get_part(double num, int& refint_part, double& refdec_part);
```
- 실수의 정수부와 소수부를 분리하는 함수 get_part 선언, 참조에 의한 호출 방식
```cpp
int main() {
```
- 메인함수 시작
```cpp
double num;
int int_part;
double dec_part;
```
- 실수를 입력받을 실수형 변수 num, 정수부를 저장할 정수형 변수 int_part, 소수부를 저장할 실수형 변수 dec_part 선언
```cpp
cout << "실수를 입력하시오: ";
cin >> num;
```
- 도움말 출력 및 사용자로부터 실수 입력받음
```cpp
get_part(num, int_part, dec_part);
```
- 함수 호출, 지역 변수 num, int_part, dec_part을 인자로 전달
```cpp
cout << "정수부 : " << int_part << '\n' << "소수부 : " << dec_part << endl;
```
- 결과 출력
```cpp
return 0;
}
```
- 0을 반환하고 메인함수 종료
```cpp
void get_part(double num, int& refint_part, double& refdec_part)
{
```
- get_part 함수 정의 시작
```cpp
refint_part = (int)num;
```
- num을 int로 강제 형변환해 정수 부분만 남기고 저장, 참조 변수를 사용해 원본 지역 변수의 값도 변경
```cpp
refdec_part = num - refint_part;
}
```
- 원래 숫자를 정수 부분으로 뺄셈해 소수 부분만 저장, 참조 변수를 사용해 원본 지역 변수의 값도 변경
- 함수 종료
# 실행 결과  
<img width="804" height="211" alt="스크린샷 2026-05-10 145241" src="https://github.com/user-attachments/assets/d0915889-e352-4898-bd55-6f6afd91f78b" />

