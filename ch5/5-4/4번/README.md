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
class Collector {
```
- Collector 클래스 선언
```cpp
	int* p;
	int size = 0;
```
- private로 동적할당한 주소를 저장할 포인터 p, 저장한 데이터의 갯수를 저장할 변수 size 선언
```cpp
public:
	Collector(int size, int values[]);
	Collector(const Collector& src);
	~Collector() { delete[] p; }
	void show();
	int getSize() { return size; }
	int get(int index) { return p[index]; }
};
```
- 접근지정자 public으로 멤버함수 선언 및 일부 인라인 함수로 정의, 클래스 선언부 종료
- 소멸자 호출 시 동적할당된 공간 반환
- 멤버 변수 size의 값을 반환하는 getter 정의
- 전달받은 인자값의 인덱스에 있는 데이터를 반환하는 getter 정의    
```cpp
Collector::Collector(int size, int values[]) : size(size > 0 ? size : 2), p(nullptr) {
	if (!values || size <= 0)
	{
		cout << "잘못된 크기이거나 잘못된 데이터입니다. 2개로 기본 설정합니다." << endl;
		p = new int[2]{0, 0};
	}
	else {
		p = new int[size];
		for (int i = 0; i < size; i++) 
			p[i] = values[i];
	}
}
```
- 생성자 정의, 멤버 초기화 리스트를 통해 멤버 변수 초기화
- 전달받은 배열의 주소가 NULL이거나 size<=0 이면 안내문 출력 및 2개의 0을 원소로 갖는 배열 동적할당
- 정상 인자 전달 시 this->size를 전달받은 size의 값으로 초기화. 이후 size의 크기만큼 배열 동적할당하고 원래 배열에서 size 개의 데이터 복사해 저장
```cpp
Collector::Collector(const Collector& src) {
	this->size = src.size;
	p = new int[size];
	for (int i = 0; i < size; i++)
		p[i] = src.p[i];
}
```
- 복사 생성자 정의, 원본 객체의 멤버 변수값 복사해 초기화, 새롭게 동적 할당해 깊은 복사 수행, for문을 통해 원본 객체의 배열로부터 데이터값 복사해 저장
```cpp
void Collector::show() {
	cout << "데이터 수 " << size << ": ";
	for (int i = 0; i < size; i++)
		cout << p[i] << ' ';
	cout << endl;
}
```
- 객체가 저장하고 있는 데이터의 개수와 값들을 출력하는 show()함수 정의, for문을 통해 각 인덱스에 접근해 데이터 출력
```cpp
double calcAvg(Collector& weight);
```
- 전달받은 객체의 소스코드 설명
```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언이 담긴 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
class Collector {
```
- Collector 클래스 선언
```cpp
	int* p;
	int size = 0;
```
- private로 동적할당한 주소를 저장할 포인터 p, 저장한 데이터의 갯수를 저장할 변수 size 선언
```cpp
public:
	Collector(int size, int values[]);
	Collector(const Collector& src);
	~Collector() { delete[] p; }
	void show();
	int getSize() { return size; }
	int get(int index) { return p[index]; }
};
```
- 접근지정자 public으로 멤버함수 선언 및 일부 인라인 함수로 정의, 클래스 선언부 종료
- 소멸자 호출 시 동적할당된 공간 반환
- 멤버 변수 size의 값을 반환하는 getter 정의
- 전달받은 인자값의 인덱스에 있는 데이터를 반환하는 getter 정의    
```cpp
Collector::Collector(int size, int values[]) : size(size > 0 ? size : 2), p(nullptr) {
	if (!values || size <= 0)
	{
		cout << "잘못된 크기이거나 잘못된 데이터입니다. 2개로 기본 설정합니다." << endl;
		p = new int[2]{0, 0};
	}
	else {
		p = new int[size];
		for (int i = 0; i < size; i++) 
			p[i] = values[i];
	}
}
```
- 생성자 정의, 멤버 초기화 리스트를 통해 멤버 변수 초기화
- 전달받은 배열의 주소가 NULL이거나 size<=0 이면 안내문 출력 및 2개의 0을 원소로 갖는 배열 동적할당
- 정상 인자 전달 시 this->size를 전달받은 size의 값으로 초기화. 이후 size의 크기만큼 배열 동적할당하고 원래 배열에서 size 개의 데이터 복사해 저장
```cpp
Collector::Collector(const Collector& src) {
	this->size = src.size;
	p = new int[size];
	for (int i = 0; i < size; i++)
		p[i] = src.p[i];
}
```
- 복사 생성자 정의, 원본 객체의 멤버 변수값 복사해 초기화, 새롭게 동적 할당해 깊은 복사 수행, for문을 통해 원본 객체의 배열로부터 데이터값 복사해 저장
```cpp
void Collector::show() {
	cout << "데이터 수 " << size << ": ";
	for (int i = 0; i < size; i++)
		cout << p[i] << ' ';
	cout << endl;
}
```
- 객체가 저장하고 있는 데이터의 개수와 값들을 출력하는 show()함수 정의, for문을 통해 각 인덱스에 접근해 데이터 출력
```cpp
double calcAvg(Collector& weight);
```
- 전달받은 객체가 저장한 데이터들의 평균값을 계산하고 반환하는 함수 calAvg 선언
- 참조 객체를 매개변수로 선언
```cpp
int main() {
```
- 메인함수 시작
```cpp
	int temp[] = { 69, 70, 71, 72, 74 }; 
```
- 원본 데이터 배열 선언 및 초기화
```cpp
	Collector weight(4, temp);
```
- weight 객체 생성 및 인자로 초기화
```cpp
	double avg = calcAvg(weight);
```
- 평균을 저장할 변수 avg 선언 및 calcAvg 함수 호출해 리턴값으로 초기화
```cpp
	weight.show();
```
- 멤버함수 show() 호출
```cpp
	cout << "평균은 " << avg << endl;
  }
```
- 결과 출력 및 메인함수 종료  
```cpp
double calcAvg(Collector& weight) {
```
- calcAvg 함수 정의 시작
```cpp
	double result = 0;
```
- 데이터들의 총합을 저장할 변수 result 선언
```cpp
	int size = weight.getSize();
```
- 데이터의 갯수를 저장할 변수 size 선언 및 참조 객체 weight를 통해 객체의 멤버함수 호출 및 멤버변수 size의 값 리턴
```cpp
	for (int i = 0; i < size; i++)
	{
		result += weight.get(i);
	}
```
- 데이터의 총합을 구하기 위한 for문 선언, get()함수를 통해 배열의 원소에 접근
```cpp
	return result / size;
}
```
- 데이터의 총합을 size로 나눈 평균값 리턴 및 함수 종료
# 실행 결과  
<img width="803" height="157" alt="스크린샷 2026-05-15 230625" src="https://github.com/user-attachments/assets/ca90633b-3fe7-4857-8d87-bcef8aaa694c" />



