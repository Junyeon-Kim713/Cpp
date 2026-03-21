# 소스코드 설명  
```cpp
﻿#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 담은 헤더파일 포함
```cpp
using namespace std;
```
- std 이름공간 안에 선언된 모든 이름에 std 생략
```cpp
#define NUM 5
```
- 매크로 상수 선언, 이후에 선언할 double형 배열의 길이 정의
```cpp
void get_Arr(double* arr, int len);
```
- 배열에 저장할 실수를 입력받는 함수 선언
```cpp
double get_Sum(double* arr, int len);
```
- 배열에 저장된 실수의 합을 합하는 함수 선언
```cpp
int main()
```
- 메인함수 시작
```cpp
double nums[NUM];
```
- 실수를 입력받을 배열 선언
```cpp
get_Arr(nums, NUM);
```
- 배열에 저장할 값을 입력받는 함수 호출
```cpp
cout << "양수 합은 " << get_Sum(nums, NUM) << "입니다." << endl;
```
- 결과 출력, << 피연산자로 함수를 호출해 리턴값을 바로 출력
```cpp
return 0;
```
- 0을 반환하고 메인함수 종료
```cpp
void get_Arr(double* arr, int len)
```
- 값을 입력받아 배열에 저장하는함수 get_Arr 정의 시작
```cpp
cout << "실수 5개를 입력하세요>> ";
```
- 도움말 출력, cout 표준 출력 스트림 객체, << 스트림 삽입 연산자
```cpp
for (int i = 0; i < len; i++)
```
- 배열에 값을 저장하기 위한 for문 선언, 한 루프마다 i가 증가하며 모든 배열의 인덱스 표현
```cpp
cin >> arr[i];
```
- 키보드로 부터 입력받은 값을 배열에 저장, cin 표준 입력 스트림 객체, >> 스트림 추출 연산자
```cpp
double get_Sum(double* arr, int len)
```
- 배열에 저장된 값을 합하는 함수 get_Sum 정의 시작
```cpp
double sum = 0;
```
- 결과를 저장할 double형 변수 선언 및 초기화
```cpp
for (int i = 0; i < len; i++)
```
- 배열에 저장된 값에 접근하기 위한 for문 선언
```cpp
if (arr[i] > 0)
			sum += arr[i];
```
- 배열에 저장된 값이 양수라면 더함
```cpp
return sum;
```
- sum을 리턴하고 함수 종료
# 실행 결과
- <img width="808" height="161" alt="image" src="https://github.com/user-attachments/assets/c094e013-8180-4e80-9373-ae57ada85846" />
