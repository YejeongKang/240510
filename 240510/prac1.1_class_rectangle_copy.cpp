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

};

float Rectangle::area()
{
	return m_width * m_height;
}

// ���� ������
Rectangle::Rectangle(const Rectangle& copy)
{
	this->m_width = copy.m_width;
	this->m_height = copy.m_height;
}


int main() {
	
	// Rec2 Ŭ���� ������ ���� (���� ������)
	Rectangle Rec1(1.2, 3.4);
	Rectangle Rec2(Rec1);

	// ������ ������ area()�Լ� ȣ���ؼ� ���� ���ϱ�
	cout << "���� �����ڷ� ���� ���� Rec2�� ���̴� : " << Rec2.area() << endl; // ������ ������ ����

	// �⺻�����ڷ� ������ Rec3 Ŭ���� ������ �����ϱ�
	Rectangle Rec3;
	Rec3 = Rec1;

	cout << "�⺻ �����ڷ� ���� ���� Rec3�� ���̴� : " << Rec3.area() << endl; // ������ ������ ����

	return 0;
}
