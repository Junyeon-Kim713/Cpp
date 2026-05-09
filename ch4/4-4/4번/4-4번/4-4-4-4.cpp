#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill(int n);
	bool consume(int n);
	int getSize()
	{
		return size;
	}
};
void Container::fill(int n)
{
	if (size == 10)
		return;
	else
	{
		if (size + n > 10)
			size = 10;
		else
			size += n;
	}
}
bool Container::consume(int n)
{
	if (size - n < 0)
	{
		return false;
	}
	else
	{
		size -= n;
		return true;
	}
}

class coffeeVendingMachine {
	Container tong[3];
	void fill();
	void getEspresso();
	void getAmericano();
	void getSugarCoffee();
	void show();
public:
	void run();
};
void coffeeVendingMachine::fill()
{
	for (int i = 0; i < 3; i++)
		tong[i].fill(10);
}
void coffeeVendingMachine::getEspresso()
{
	if (tong[0].consume(1) && tong[1].consume(1))
	{
		cout << "에스프레소 드세요." << endl;
	}
	else
		cout << "원료가 부족합니다." << endl;
}

void coffeeVendingMachine::run()
{
	cout << "***** 커피 자판기를 작동합니다. *****" << endl;
	while (1)
	{
		cout << "메뉴를 눌러주세요(1: 에스프레소, 2: 아메리카노, 3: 설탕커피, 4: 잔량보기, 5: 채우기)>>";
		int n;
		cin >> n;
		switch (n) {
		case 1:
			getEspresso();
			break;
		case 2:
			getAmericano();
			break;
		case 3:
			getSugarCoffee();
			break;
		case 4:
			show();
			break;
		case 5:
			fill();
			break;
		}
	}

}
