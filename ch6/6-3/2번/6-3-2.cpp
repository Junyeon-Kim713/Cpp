// Title : 전역함수를 클래스 안에서 static 멤버 함수로 선언해 캡슐화를 구현한 프로그램  
// Author : 김준연  
// Date : 26.05.24

#include <iostream>
using namespace std;
class MyMath {
public:
	static int GetMax(int* arr, int arr_len);
	static int GetMin(int* arr, int arr_len);
};
int MyMath::GetMax(int* arr, int arr_len) {
	int max = arr[0];
	for (int i = 1; i < arr_len; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
int MyMath::GetMin(int* arr, int arr_len) {
	int min = arr[0];
	for (int i = 1; i < arr_len; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}
int main() {
	int x[5] = { 20, 30, -5, 2, -30 };
	cout << "최대값은 :" << MyMath::GetMax(x, 5) << endl;
	cout << "최소값은 :" << MyMath::GetMin(x, 5) << endl;
	return 0;
}
