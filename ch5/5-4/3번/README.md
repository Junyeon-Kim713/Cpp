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
class Mystack {
```
- Mystack 클래스 선언 시작
```cpp
	int* p;
	int size = 0;
	int tos = 0;
```
- 멤버 변수 private로 선언
- 동적할당 받은 메모리 공간의 주소를 저장할 포인터 p, 할당받은 배열의 크기(스택 크기)를 저장할 변수 size, 스택에 쌓인 데이터의 개수를 저장할 변수 tos 선언
```cpp
public:
	Mystack();
	Mystack(int size);
	Mystack(const Mystack& src);
	~Mystack();
	bool push(int n);
	bool pop(int& n);
};
```
- 접근 지정자 public으로 멤버 함수 선언 및 클래스 선언부 종료  
- 생성자, 복사 생성자, 소멸자, push, pop 함수 선언
```cpp
Mystack::Mystack() : Mystack(5) {}
```
- 기본 생성자 정의, 멤버 초기화 리스트를 통한 위임 생성자로 정의
```cpp
Mystack::Mystack(int size) : size(size > 0 ? size : 5), tos(0) {
    p = new int[this->size]; 
    
    if (size <= 0) {
        cout << "size 5인 스택 생성" << endl;
    }
}
```
- 타겟 생성자 정의, 멤버 초기화 리스트와 삼항 연산자(?) 이용해 정의
- size>0 조건에 참이면 this->size에 전달받은 size 값 대입, 거짓이면 this->size에 5 대입 및 안내 문구 출력
- 공통으로 tos 0으로 초기화 및 this->size의 값을 크기로 배열 동적 할당
- 멤버 초기화 리스트는 바로 실행되어 멤버 변수가 초기화 되므로 this->size로 배열 크기 표현해도 원하는 크기로 생성됨
```cpp
Mystack::Mystack(const Mystack& src) {
	p = new int[src.size];
	size = src.size;
	tos = src.tos;

	for (int i = 0; i < tos; i++) {
		p[i] = src.p[i];
	}
}
```
- 복사 생성자 정의, 참조 객체 src의 멤버 변수 값으로 초기화 및 새로운 공간 동적 할당받아 깊은 복사 수행
- for문을 통해 원본 객체의 배열의 원소들 복사해서 저장
```cpp
Mystack::~Mystack() {
	delete [] p;
}
```
- 소멸자 정의, 할당받은 공간 반환
```cpp
bool Mystack::push(int n) {
	if (tos == size)
		return false;
	else {
		p[tos++] = n;
		return true;
	}
}
```
- push 연산을 수행하는 push 함수 정의, 스택이 꽉 차 있으면 false 반환, 아니면 데이터 저장 후 true 반환
```cpp
bool Mystack::pop(int& n) {
	if (tos == 0)
		return false;
	else
	{
		n = p[tos-1];
		tos--;
		return true;
	}
}
```
- pop 연산을 수행하는 pop 함수 정의, 스택이 비어있으면 false 반환, 아니면 스택의 탑에 있는 데이터 참조 변수 n에 대입 후 true 반환  
```cpp
int main() {
```
- 메인함수 시작
```cpp
Mystack a(10);
```
- 크기가 10인 스택 a 생성
```cpp
a.push(10); a.push(20);
```
- 멤버 함수 push를 호출해 스택 a에 정수 10, 20 저장
```cpp
Mystack b(a);
```
- 객체 a를 인자로 객체 b 복사 생성, 복사 생성자 호출됨  
```cpp
b.push(30);
```
- 스택 b에 정수 30 저장
```cpp
int n;
```
- 정수형 변수 n 선언
```cpp
a.pop(n);
```
- 멤버 함수 pop 호출, n을 인자로 전달해 n에 a 스택의 탑에 있는 값 저장
```cpp
cout << "스택 a에서 pop한 값 " << n << endl;
```
- 결과 출력
```cpp
b.pop(n);
```
- 멤버 함수 pop 호출, n을 인자로 전달해 n에 b 스택의 탑에 있는 값 저장
```cpp
cout << "스택 b에서 pop한 값 " << n << endl;
```
- 결과 출력
```cpp
return 0;
}
```
- 0을 반환하고 메인함수 종료
# 실행 결과  
<img width="808" height="164" alt="스크린샷 2026-05-15 033027" src="https://github.com/user-attachments/assets/2e7acee3-f3fe-4033-98c8-ff5514da5a5d" />
