# 소스코드 설명  
```cpp
#include <iostream>
using namespace std;
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 선언
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
class Triangle {
```
- Triangle 클래스 선언
```cpp
	int width;
	int height;
	static int tri_num;
```
- 접근 지정자 private으로 멤버변수 선언, 생성한 객체의 숫자를 나타내는 static 멤버변수 tri_num 선언
```cpp
public:
	Triangle(int width = 1, int height = 1);
	~Triangle() { tri_num--; }
	static int getNumofTriangle() { return tri_num; }
};
```
- 접근 지정자 public으로 멤버함수 선언
- 생성자 및 소멸자 선언, 소멸자 호출 시 static 멤버 변수 tri_num의 값 1 감소
- static 멤버 함수 getNumofTriangle 선언 및 인라인 함수로 정의, static 멤버 함수는 클래스 내부에서 정의해도 괜찮음 -> 어차피 모든 멤버 함수는 코드영역에 하나만 생성됨
```cpp
int Triangle::tri_num = 0;
```
- static 멤버 변수 tri_num 클래스 외부에서 선언 및 초기화
```cpp
Triangle::Triangle(int width, int height) {
	this->width = width;
	this->height = height;
	tri_num++;
}
```
- 생성자 정의, 생성자 호출 시 멤버 변수를 초기화하고 tri_num의 값 1 증가
```cpp
int main() {
```
- 메인함수 시작
```cpp
	Triangle* tri1 = new Triangle[5];
	cout << "생성된 삼각형의 개수 :" << Triangle::getNumofTriangle() << endl;
	delete[] tri1;
```
- Triangle 클래스 객체 5를 담은 배열 동적할당
- 클래스 이름으로 static 멤버함수 getNumofTriangle() 호출 및 생성된 객체의 개수인 tri_num의 값을 리턴받아 출력
- tri1이 가리키는 메모리 반환
```cpp
	Triangle tri2[15];
	cout << "생성된 삼각형의 개수 :" << Triangle::getNumofTriangle() << endl;
```
- Triangle 클래스의 객체 15개를 담은 배열 선언
- 클래스 이름으로 static 멤버함수 getNumofTriangle() 호출 및 생성된 객체의 개수인 tri_num의 값을 리턴받아 출력
```cpp
	return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
<img width="796" height="159" alt="image" src="https://github.com/user-attachments/assets/90507e07-fd4b-47f2-afcb-89d614c4e702" />

