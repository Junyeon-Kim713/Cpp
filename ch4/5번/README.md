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
class Triangle {
```
- Triangle 클래스 선언
```cpp
```cpp
private:
	int width;
	int height;
```
- 접근 지정자 private로 멤버 변수 선언
```cpp
public:
```
- 접근 지정자 public으로 지정, 이후 나오는 멤버는 public
```cpp
  Triangle();
	Triangle(int w);
	Triangle(int w, int h);
```
- 생성자 선언
```cpp
	~Triangle() {
		cout << "폭 " << this->width << "높이 " << this->height << "인 삼각형 소멸" << endl;
	}
```
- 소멸자 선언 및 인라인 함수로 정의, this 포인터를 사용해 작성
```cpp
	void setWidth(int w);
	void setHeight(int h);
```
- setter 함수 선언
```cpp
	double getArea() {
		return 0.5 * this->width * this->height;
	}

};
```
- getter 함수 선언 및 인라인 함수로 정의, 클래스 선언부 종료 , this 포인터를 사용해 작성
```cpp
Triangle::Triangle()
{
	this->width = 1;
	this->height = 1;
}
```
- 인자가 없는 생성자 정의, this 포인터를 사용해 작성
```cpp
Triangle::Triangle(int w)
{
	if (w <= 0)
	{
		cout << "양수를 입력하시오" << endl;
		this->width = w;
		this->height = 1;
	}
	else
	{
		this->width = w;
		this->height = 1;
	}
}
```
- 인자가 한개인 생성자 정의, this 포인터를 사용해 작성
```cpp
Triangle::Triangle(int w, int h)
{
	if (w <= 0 || h <= 0)
	{
		cout << "양수를 입력하시오" << endl;
		this->width = w;
		this->height = 1;
	}
	else
	{
		this->width = w;
		this->height = h;
	}
}
```
- 인자가 모두 있는 생성자 정의, this 포인터를 사용해 작성
```cpp
void Triangle::setWidth(int w)
{
	if (w <= 0)
		cout << "양수를 입력하시오" << endl;
	else
		this->width = w;
}
```
- setter 함수 정의, this 포인터를 사용해 작성
```cpp
void Triangle::setHeight(int h) {
	if (h <= 0)
		cout << "양수를 입력하시오" << endl;
	else
		this->height = h;
}
```
-  setter 함수 정의, this 포인터를 사용해 작성
```cpp
int main()
```
- 메인함수 시작
```cpp
Triangle tri[3] = { Triangle(2,2), Triangle(4,4), Triangle(6,6) };
```
- 객체 배열 선언, 각 원소 객체 초기화
```cpp
Triangle* p = tri;
```
- 객체 포인터 선언 및 tri 배열의 첫번째 원소의 주소 저장
```cpp
cout << "삼각형" << 0 << "의 면적은" << tri[0].getArea() << endl;
cout << "삼각형" << 1 << "의 면적은" << (p+1)->getArea() << endl;
cout << "삼각형" << 2 << "의 면적은" << (*(tri+2)).getArea() << endl;
```
- 배열 표현 및 다양한 포인터 표현을 통한 멤버 함수 호출 및 화면에 각 원소의 면적을 출력, 포인터 연산을 통해 배열의 원소에 접근
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
<img width="790" height="384" alt="스크린샷 2026-04-03 002137" src="https://github.com/user-attachments/assets/02df8d23-446e-4b11-ad5c-bcc3830f17ae" />

