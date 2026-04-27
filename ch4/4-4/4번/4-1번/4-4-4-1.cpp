#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count;
	cout << "구입할 물품의 개수>> ";
	cin >> count;
	int* pArray = new int[count];
	cout << "물품 " << count << "개의 가격 입력>>";
	for (int i = 0; i < count; i++)
	{
		cin >> *(pArray + i);
	}
	int min = pArray[0];
	int max = pArray[0];
	for (int i = 1; i < count; i++) // 입력받는 반복문으로 합병해보기!
	{
		if (min > pArray[i])
			min = pArray[i];
		if (max < pArray[i])
			max = pArray[i];
	}
	delete [] pArray;
	cout << "제일 싼 가격은 " << min << "\n제일 비싼 가격은 " << max << endl;
	return 0;

}