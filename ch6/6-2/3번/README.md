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
	Point3D(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z) {}
	void show() {
		cout << "3차원 점의 좌표는 (" << x << "," << y << ',' << z << ')' << endl;
	}

};
```
- public으로 멤버함수 선언
- 디폴트 매개변수로 생성자 선언해 함수 중복 간소화, 멤버 초기화 리스트로 초기화  
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
# 실행결과
<img width="789" height="232" alt="image" src="https://github.com/user-attachments/assets/c7a002af-02ea-47ef-b756-9f9eaf5591a3" />
