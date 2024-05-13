#include <iostream>
#include <string>

using namespace std;

class Rectangle {

private:
	float m_width = 0;
	float m_height = 0;

public:
	Rectangle() {}

	// �⺻ ������
	Rectangle(float w, float h) : m_width(w), m_height(h) {}

	// ���� ������
	Rectangle(const Rectangle& copy);

	float area(); // Ŭ���� ���ο� ���� �ص�.

	float getWidth() {
		return m_width;
	}

	float getHeight() {
		return m_height;
	}

	void setWidth(float width) {
		
		this->m_width = width;
	}

	void setHeight(float height) {

		this->m_height = height;
	}

};

float Rectangle::area()
{
	return m_width * m_height;
}

int main() {
	float width, height;

	Rectangle Rec(1, 2);

	cout << "���̴� : " << Rec.area() << endl; // ����

	cout << "�簢���� ���ο� ���� ���̸� �Է��Ͻÿ�. (����� ����): ";
	cin >> width >> height;

	Rec.setWidth(width);

	Rec.setHeight(height);

	cout << "���̴� : " << Rec.area() << endl
		 << "���� ���� ���̴� : " << Rec.getWidth() << " " << Rec.getHeight();


	return 0;
}

