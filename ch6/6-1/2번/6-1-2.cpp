#include <iostream>
#include <string>
using namespace std;
int big(int num1, int num2);
double big(double num1, double num2);
string big(string str1, string str2);
int main() {
	int x = big(10, 20);
	cout << "큰 정수값은 " << x << endl;
	double y = big(3.14, 1.05);
	cout << "큰 실수값은 " << y << endl;
	string z = big("hello", "world");
	cout << "사전에서 뒤에 나오는 단어는 " << z << endl;
	return 0;
}
int big(int num1, int num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}
double big(double num1, double num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}
string big(string str1, string str2) {
	if (str1 > str2)
		return str1;
	else
		return str2;
}
