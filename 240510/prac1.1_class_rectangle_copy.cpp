#include <iostream>
#include <string>

using namespace std;

class Rectangle {

private:
	float m_width = 0;
	float m_height = 0;

public:
	Rectangle() {}

	// 기본 생성자
	Rectangle(float w, float h) : m_width(w), m_height(h) {}

	// 복사 생성자
	Rectangle(const Rectangle& copy);

	float area(); // 클래스 내부에 선언만 해둠.

};

float Rectangle::area()
{
	return m_width * m_height;
}

// 복사 생성자
Rectangle::Rectangle(const Rectangle& copy)
{
	this->m_width = copy.m_width;
	this->m_height = copy.m_height;
}


int main() {
	
	// Rec2 클래스 변수에 복사 (복사 생성자)
	Rectangle Rec1(1.2, 3.4);
	Rectangle Rec2(Rec1);

	// 복사한 변수의 area()함수 호출해서 넓이 구하기
	cout << "복사 생성자로 만든 변수 Rec2의 넓이는 : " << Rec2.area() << endl; // 복사한 변수의 넓이

	// 기본생성자로 생성된 Rec3 클래스 변수에 복사하기
	Rectangle Rec3;
	Rec3 = Rec1;

	cout << "기본 생성자로 만든 변수 Rec3의 넓이는 : " << Rec3.area() << endl; // 복사한 변수의 넓이

	return 0;
}
