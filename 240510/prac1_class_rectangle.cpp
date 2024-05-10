#include <iostream>
#include <string>

using namespace std;

class Rectangle {

private:
	float m_width = 0;
	float m_height = 0;

public:
	Rectangle() {}

	Rectangle(float w, float h) : m_width(w), m_height(h) {}

	float area() { return m_width * m_height; }

};

int main() {
	float width, height;

	cout << "사각형의 가로와 세로 길이를 입력하시오. (띄어쓰기로 구분): ";
	cin >> width >> height;
	
	Rectangle R(width, height);

	cout << "사각형의 넓이는: " << R.area() << endl;

	return 0;
}