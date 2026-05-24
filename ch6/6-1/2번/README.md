# 소스코드 설명  
```cpp
#include <iostream>
#include <string>
using namespace std;
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
- string 객체의 선언을 담은 헤더파일 포함
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
int big(int num1, int num2);
double big(double num1, double num2);
string big(string str1, string str2);
```
- 전달받은 두개의 인자를 비교하는 big 함수 선언, 함수 중복을 통해 다른 자료형의 매개변수를 다루는 함수를 하나의 이름으로 통합
```cpp
int main() {
```
- 메인함수 시작
```cpp
	int x = big(10, 20);
	cout << "큰 정수값은 " << x << endl;
```  
- 정수 10, 20을 인자로 함수 big 호출, 정수형 변수 x 선언과 동시에 리턴값으로 초기화
- 결과 출력
```cpp
	double y = big(3.14, 1.05);
	cout << "큰 실수값은 " << y << endl;
```
- 실수 3.14, 1.05를 인자로 함수 big 호출 및 double형 변수 y 선언과 동시에 리턴값으로 초기화, 인자가 실수이므로 자료형이 double인 매개변수의 big 함수가 호출됨
- 
```cpp
	string z = big("hello", "world");
	cout << "사전에서 뒤에 나오는 단어는 " << z << endl;
```
- string 객체의 문자열 hello, world를 인자로 big 호출, 매개변수가 string 객체인 big 함수 호출됨, string 객체 z big함수의 리턴값으로 초기화하며 생성
```cpp
  return 0;
}
```
- 0을 반환하고 메인함수 종료
```cpp
int big(int num1, int num2) {
```
- 정수 2개를 전달받고 비교하여 큰 값을 리턴하는 함수 big 정의 시작  
```cpp
	if (num1 > num2)
		return num1;
	else
		return num2;
}
```
- 두 값을 비교하고 더 큰 값을 리턴하고 함수 종료
```cpp
double big(double num1, double num2) {
```
- 실수 2개를 전달받고 비교하여 큰 값을 리턴하는 함수 big 정의 시작, 매개변수의 자료형을 다르게해 함수 big와 함수 중복 구현  
```cpp
if (num1 > num2)
		return num1;
	else
		return num2;
}
```
- 두 값을 비교하고 더 큰 값을 리턴하고 함수 종료
```cpp
const string& big(const string& str1, const string& str2) {
```
- string 객체 혹은 문자열을 전달받아 string 참조 객체를 생성하고 참조의 문자열을 비교하여 사전편찬순서 상 뒤에 나오는 참조를 리턴하는 함수 big 정의 시작, 매개변수의 자료형을 다르게해 함수 big와 함수 중복 구현
```cpp
	if (str1 > str2)
		return str1;
	else
		return str2;
}
```
- 두 문자열을 비교하여 사전에서 더 뒤에 나오는 문자열의 참조 객체를 리턴하고 함수 종료
# 실행 결과  
<img width="784" height="183" alt="image" src="https://github.com/user-attachments/assets/767eb00e-35b8-452e-b986-5ef7ca991186" />
