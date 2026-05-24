# 소스코드 설명  
```cpp
#include <iostream>
using namespace std;
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
```cpp
class Point3D {
```
- Point3D 클래스 선언 시작
```cpp
	int x, y, z;
```
- private로 좌표를 나타내는 멤버변수 x,y,z 선언
```cpp
public:
	Point3D(int x, int y, int z);
	Point3D(int x, int y);
	Point3D(int x);
	Point3D() : Point3D(0, 0, 0) {}
	void show() {
		cout << "3차원 점의 좌표는 (" << x << ", " << y << ", " << z << ")" << endl;
	}
};
```
- public으로 멤버함수 선언
- 매개변수의 갯수를 다르게 해 함수중복으로 생성자 선언, 위임 생성자와 타겟 생성자를 통해 초기화
- 객체의 멤버 변수 x,y,z의 값을 출력하는 멤버 함수 show 선언 및 인라인 함수로 정의
```cpp
int main() {
```
- 메인함수 시작
```cpp
	Point3D p0;
	p0.show();
```
- 인자없이 객체 p0 생성
- show함수를 호출해 p0의 좌표값 출력
```cpp
	Point3D p1(1); 
	p1.show();
```
- 인자를 한 개 전달하여 객체 p1 생성
- show함수를 호출해 p1의 좌표값 출력
```cpp
	Point3D p2(1, 2);
	p2.show();
```
- 인자를 두 개 전달하여 객체 p2 생성
- show함수를 호출해 p2의 좌표값 출력
```cpp
	Point3D p3(1, 2, 3);
	p3.show();
```
- 인자를 세 개 전달하여 객체 p3 생성
- show함수를 호출해 p3의 좌표값 출력
```cpp
	return 0;
}
```
- 0을 반환하고 메인함수 종료
# 실행 결과  
<img width="804" height="233" alt="스크린샷 2026-05-24 160614" src="https://github.com/user-attachments/assets/55a0f9da-5139-4965-8fd0-4bb097412c9f" />
