# 소스코드 설명  
```cpp
#include <iostream>
using namespace std;
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
- std 이름공간에 선언된 모든 이름에 std 생략
```cpp
class MyMath {
public:
	static int GetMax(int* arr, int arr_len);
	static int GetMin(int* arr, int arr_len);
};
```
- 전역함수를 모아놓은 클래스 MyMath 선언
- 접근 지정자 public으로 선언
- 최댓값과 최솟값을 구하는 GetMax, GetMin을 스태틱 멤버함수로 선언, 클래스 이름으로 함수 호출 가능, 캡슐화 구현
```cpp
int MyMath::GetMax(int* arr, int arr_len) {
	int max = arr[0];
	for (int i = 1; i < arr_len; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
```
- static 멤버함수 GetMax 정의
- 전달받은 배열에서 최댓값을 구한 후 최댓값 리턴
```cpp
int MyMath::GetMin(int* arr, int arr_len) {
	int min = arr[0];
	for (int i = 1; i < arr_len; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}
```
-  static 멤버함수 GetMin 정의
-  전달받은 배열에서 최솟값을 구한 후 최솟값 리턴
```cpp
int main() {
	int x[5] = { 20, 30, -5, 2, -30 };
	cout << "최대값은 :" << MyMath::GetMax(x, 5) << endl;
	cout << "최소값은 :" << MyMath::GetMin(x, 5) << endl;
	return 0;
}
```
- 메인함수 시작
- 정수 5개를 담은 배열 선언
- MyMath 클래스의 스태틱 멤버함수 GetMax 호출 및 리턴값 출력
- MyMath 클래스의 스태틱 멤버함수 GetMin 호출 및 리턴값 출력
- 0을 반환하고 메인함수 종료
# 실행결과
<img width="806" height="168" alt="image" src="https://github.com/user-attachments/assets/c13e49bd-a7c4-440c-bc2b-9ccfd573549b" />
