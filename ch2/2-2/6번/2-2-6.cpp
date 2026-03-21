#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char arr[100] = { 0 };
	int count = 0, i = 0;
	while (1)
	{
		count = 0;
		i = 0;

		cout << "영문 텍스트를 입력하세요(빈칸 포함 가능)>> ";
		cin.getline(arr, sizeof(arr), '\n');
		if (strcmp(arr, "exit") == 0)
			break;
		while (arr[i] != '\0')
		{
			if (arr[i] != ' ' && arr[i] != '\t')
				if (arr[i + 1] == ' ' || arr[i + 1] == '\t' || arr[i + 1] == '\0')
					count++;
			i++;
		}
		cout << "단어의 개수는 " << count << "개이다.\n";
		
	}
	return 0;
}