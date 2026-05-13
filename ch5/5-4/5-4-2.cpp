// Title : cstring 문자열 멤버함수를 string 객체 문자열로 변경해 클래스를 정의하고 복사 생성자를 이용해 객체를 생성하는 프로그램
// Author : 김준연
// Date : 26.05.13

#include <iostream>
#include <string>
using namespace std;
class Person { // Person 클래스 선언
	string name;
	int id;
public:
	Person(int id, const string); // 생성자
	Person(const Person& person); // 복사 생성자
	~Person(); // 소멸자
	void changeName(const string);
	void show() { cout << id << ',' << name << endl; }
};
Person::Person(int id, const string name) { // 생성자
	this->id = id;
	this->name = name; 
}
Person::Person(const Person& person) { // 복사 생성자
	this->id = person.id;
	this->name = person.name;
	cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}
Person::~Person() {
}
void Person::changeName(const string name) {
	this->name = name;
}
int main() {
	Person father(1, "Kitae"); // father 객체 생성자 호출
	Person daughter(father); // daughter 객체의 복사생성자 호출
	cout << "daughter 객체 생성 직후 ----" << endl;
	father.show(); // father 객체 출력
	daughter.show(); // daughter 객체 출력
	daughter.changeName("Grace"); // daughter의 이름을 "Grace"로 변경
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
	father.show(); // father 객체 출력
	daughter.show(); // daughter 객체 출력
	return 0; // daughter, father 객체 소멸
}
