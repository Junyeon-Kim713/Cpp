#include <iostream>
#include <string>
using namespace std;
class Book {
private:
	string title;
	int price;
public:
	Book() { title = ""; price = 0; }
	void set(string title, int price) { this->title = title; this->price = price; }
	string getTitle() { return title; }
	int getPrice() { return price; }

};

class Library {
	string name;
	Book* p;
	int size;
	int next = 0;
public:
	Library(string name, int size);
	~Library() { delete[] p; }
	void add(string name, int price);
	void show();
	Book* mostExpensive();

};
Library::Library(string name, int size) : name(name), size(size <= 0 ? 5 : size)
{
	if (size <= 0)
	{
		cout << "크기는 양수만 가능. 자동으로 5로 초기화" << endl;
	}
	p = new Book[size];
}
void Library::add(string name, int price)
{
	if (next >= size)
	{
		cout << "자리 부족" << endl;
	}
	else
	{
		p[next].set(name, price);
		next++;
	}
}
void Library::show()
{
	cout << name << "에 입고된 책은 다음 " << next << "권 입니다." << endl;
	for (int i = 0; i < next; i++)
	{
		cout << '[' << (p + i)->getTitle() << ']' << "	";
	}
	cout << endl;
}
Book* Library::mostExpensive()
{
	if (next == 0)
		return NULL;
	Book* max = p;
	for (int i = 1; i <= next; i++)
	{
		if (max->getPrice() < p[i].getPrice())
			max = p + i;
	}
	return max;

}
int main() {
	Library* lib = new Library("한국 도서관", 10);
	lib->add("명품 C++", 30000);
	lib->add("라즈베리파이", 34000);
	lib->add("HTML 5", 33000);
	lib->show();
	Book* b = lib->mostExpensive();
	cout << "가장 비싼 책: " << b->getTitle() << ", " << b->getPrice() << endl;
	delete lib;
	return 0;
}