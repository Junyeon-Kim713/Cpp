// Title : 단어의 개수를 리턴하는 함수, 문자열의 n번째 단어를 리턴하는 함수를 클래스에 static 멤버 함수로 모아놓은 프로그램
// Author : 김준연
// Date : 26.05.24

#include <iostream>
#include <string>
using namespace std;

class WordUtility {
public:
	static int wordCount(const string& str);
	static string getWord(const string& str, int n);
};
int WordUtility::wordCount(const string& str) {
	int count = 0;
	int len = str.length();
	bool is_word = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			is_word = false;
		}
		else {
			if (!is_word)
			{
				count++;
				is_word = true;
			}
			
		}
	}
	return count;
}
string WordUtility::getWord(const string& str, int n) {
	int count = 0;
	int i = 0;
	int len = str.length();
	int start_index = -1;
	int end_index = -1;
	bool is_word = false;
	string temp;
	while (count != n+1 && i < len) 
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			is_word = false;
			if (count == n && end_index == -1)
				end_index = i;

		}
		else {
			if (!is_word)
			{
				count++;
				is_word = true;
				if (count == n)
					start_index = i;
			}

		}
		i++;
	}
	if (start_index == -1)
		return "";
	if (end_index == -1)
		end_index = len;
	temp = str.substr(start_index, end_index - start_index);
	return temp;
}
int main() {
	int n = WordUtility::wordCount("I love c++");
	cout << "단어의 개수는 " << n << endl;
	string word = WordUtility::getWord("I love c++", 3);
	if (word == "")
		cout << "3번째 단어는 없습니다." << endl;
	else
		cout << "3번째 단어는" << word << endl;
}
