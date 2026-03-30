// Title : 사진의 크기, 촬영 장소를 저장하는 Picture 클래스
// Author : 김준연
// Date : 26.03.30

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

class Picture {
private:
	int width, height;
	char place[20];
public:
	Picture() {
		width = 5;
		height = 7;
		strcpy(place, "모름");
	}
	Picture(int w, int h, const char* p) {
		width = w;
		height = h;
		strcpy(place, p);
	}
	~Picture() {}
	int getWidth() {
		return width;
	}
	int getHeight() {
		return height;
	}
	char* getPlace() {
		return place;
	}
};
int main()
{
	Picture pic;
	Picture mt(10, 14, "한라산");
	cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
	cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;
	return 0;
}