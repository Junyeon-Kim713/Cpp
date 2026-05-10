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
void swap(int& a, int& b);
```
- 두 개의 변수의 값을 교환하는 함수 swap 선언, 참조에 의한 호출
```cpp
int main() {
```
- 메인함수 시작
```cpp
int x, y;
cout << "정수 x를 입력하시오: ";
cin >> x;
cout << "정수 y를 입력하시오: ";
cin >> y;
```
- 정수형 변수 x, y 선언 및 사용자로부터 x, y 값 입력받음
```cpp
cout << "swap함수 호출 전 x = " << x << ", y = " << y << endl;
```
- 함수 호출 전 x, y 값 출력
```cpp
swap(x, y);
```
- swap 함수 호출, 지역 변수 x, y를 인자로 전달
```cpp
cout << "swap함수 호출 후 x = " << x << ", y = " << y << endl;
```
- 함수 호출 후 x, y 값 출력
```cpp
return 0;
}
```
- 0을 반환하고 메인함수 종료
```cpp
void swap(int& a, int& b) {
```
- swap 함수 정의 시작
```cpp
int tmp;
tmp = a;
a = b;
b = tmp;
}
```
- 두 매개변수의 값 교환, 참조 변수를 이용해서 원본 변수의 값을 변경
- 함수 종료
# 실행 결과  
<img width="803" height="233" alt="스크린샷 2026-05-10 140434" src="https://github.com/user-attachments/assets/732ee066-42fd-4953-bb76-ab15e7e85752" />
