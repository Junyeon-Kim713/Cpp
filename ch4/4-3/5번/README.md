# 소스코드 설명  
```cpp
#include <iostream>
```
- cin, cout 등의 라이브러리 객체의 선언을 담은 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
class Sphere {
```
- Sphere 클래스 선언 시작
```cpp
private:
	int radius;
```
- private로 멤버 변수 선언
```cpp
public:
	Sphere(int r);
	Sphere() : Sphere(1) {}
	~Sphere() {}
	void setRadius(int r);
	int getRadius() { return radius; }
	double getVolume() { return (4.0 / 3.0) * 3.14 * radius * radius * radius; }
};
```
- public으로 생성자, 소멸자, 멤버함수 선언 및 짧은 함수들은 선언부에 정의
```cpp
Sphere::Sphere(int r) {
	setRadius(r);
}
```
- 타겟 생성자 정의, 인자가 있는 객체 생성시 setRadius(r);를 호출해 코드의 중복성 최소화
```cpp
void Sphere::setRadius(int r)
{
	if (r <= 0)
	{
		cout << "반지름은 양수만 가능, 자동으로 1로 초기화" << endl;
		radius = 1;
	}
	else
		radius = r;
}
```
- setter 함수 정의, 예외처리문을 통해 양수가 아닌 수를 받으면 안내문 출력 후 자동으로 1로 초기화
```cpp
int main()
```
- 메인함수 시작
```cpp
	int n;
	cout << "생성하고자 하는 구의 개수: ";
	cin >> n;
```
- 생성할 구의 개수를 저장할 변수 n 선언, 생성할 구의 개수를 사용자가 키보드로 입력 후 n에 저장됨
```cpp
Sphere* pArray = new Sphere[n];
```
- 힙공간에 n개의 객체를 저장하는 객체배열을 저장할 메모리를 동적할당 받고 주소를 pArray에 저장
```cpp
	for (int i = 0; i < n; i++)
	{
		int radius;
		cout << "구" << i + 1 << "의 반지름: ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}
```
- 반복문을 통해 배열의 각 원소에 접근해 반지름 세팅, pArray를 사용해 배열표현으로 각 원소에 접근
```cpp
	for (int i = 0; i < n; i++)
	{
		cout << "구" << i + 1 << "의 부피: " << pArray[i].getVolume() << endl;
	}
```
- 반복문을 통해 각 원소의 부피 출력, pArray를 사용해 배열표현으로 각 원소에 접근  
```cpp
delete[] pArray;
```
- 사용이 끝난 후 메모리 반환, 배열표현으로 주소에 접근했으므로 문제 발생X
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과  
<img width="808" height="340" alt="스크린샷 2026-04-09 195514" src="https://github.com/user-attachments/assets/82e4a6f7-90de-4a54-b17c-37090df8af13" />


