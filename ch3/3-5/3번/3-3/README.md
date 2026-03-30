# 소스코드 설명  
```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언이 담긴 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간 안에 선언된 모든 이름에 std 생략
```cpp
class Storage {
```
- 10개의 체온값을 저장하는 Storage 클래스 선언
```cpp
private:
	double temp[10];
	int count;
```
- 접근지정자 private로 선언, 체온을 저장할 배열, 저장된 체온의 갯수 세기 위한 변수 선언
```cpp
public:
	Storage();
	Storage(double t);
	~Storage();
	void put(double t);
	void dump();
	double getAvg();
};
```
- 접근지정자 public으로 선언 및 생성자, 소멸자, 멤버함수 선언
```cpp
Storage::Storage() {
	int i;
	for (i = 0; i < 10; i++)
		temp[i] = 0;
	count = 0;
}
```
- 인자가 없는 생성자 정의, 배열의 모든 인덱스 값 0으로 초기화 및 count 0으로 초기화
```cpp
Storage::Storage(double t) {
	if (t <= 0) {
		cout << "양수를 입력하시오" << endl;
		for (int i = 0; i < 10; i++)
			temp[i] = 0;
		count = 0;
	}
	else
	{
		temp[0] = t;
		count = 1;
	}
}
```
- 인자가 있는 생성자 정의, 비정상적인 값을 받는 상황을 대비해 예외처리문 작성
```cpp
inline Storage::~Storage() {};
```
- 소멸자 정의
```cpp
void Storage::put(double t) {
	if (count < 10 && t >= 0)
	{
		temp[count] = t;
		count++;
	}
	else
		cout << "저장소 꽉 참" << endl;
}
```
- 체온을 저장하는 멤버함수 정의
```cpp
void Storage::dump() {
	int i;
	for (i = 0; i < count; i++)
	{
		cout << temp[i] << " ";
	}
	cout << endl;
}
```
- 저장된 체온을 모두 출력하는 멤버함수 정의
```cpp
inline double Storage::getAvg() {
	if (count == 0)
		return 0;
	double sum = 0.0;
	for (int i = 0; i < count; i++)
	{
		sum += temp[i];
	}
	return sum / count;
}
```
- 저장된 체온의 평균값을 반환하는 getter 함수 정의
- 저장된 체온이 0개면 0을 반환, 저장된 체온이 1개 이상이면 체온의 갯수만큼 배열의 인덱스에 접근하여 계산
```cpp
int main() {
```
- 메인함수 시작
```cpp
Storage a;
```
- 인자가 없는 객체 생성
```cpp
	a.put(36.7);
	a.put(36.9);
	a.put(36.4);
```
- 멤버함수를 통한 체온 저장
```cpp
	a.dump();
```
- 멤버함수를 통해 저장된 체온 값 모두 출력
```cpp
	cout << "평균 체온은 " << a.getAvg() << "입니다." << endl;
```
- 체온의 평균을 출력하는 문구, getter 함수를 피연산자로 사용
```cpp
	return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
<img width="800" height="154" alt="스크린샷 2026-03-30 214357" src="https://github.com/user-attachments/assets/1079b4b6-2839-4420-9c65-ae4fe280171a" />

