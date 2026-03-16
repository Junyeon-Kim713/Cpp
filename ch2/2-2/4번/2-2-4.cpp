#include <iostream>
using namespace std;
#define NUM 5
void get_Arr(double* arr, int len);
double get_Sum(double* arr, int len);
int main()
{
	double nums[NUM];

	get_Arr(nums, NUM);
	cout << "양수 합은 " << get_Sum(nums, NUM) << "입니다." << endl;
	return 0;

}
void get_Arr(double* arr, int len)
{
	cout << "실수 5개를 입력하세요>> ";
	for (int i = 0; i < len; i++)
		cin >> arr[i];
}
double get_Sum(double* arr, int len)
{
	double sum = 0;

	for (int i = 0; i < len; i++)
	{
		if (arr[i] > 0)
			sum += arr[i];
	}
	return sum;
}