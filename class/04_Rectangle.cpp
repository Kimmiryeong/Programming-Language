#include "04_Rectangle.h"
#include "stdafx.h"

RECTANGLE::RECTANGLE(const int& x1, const int& y1, const int& x2, const int& y2)
	:upLeft(x1, y1), lowRight(x2, y2)
{

}

void RECTANGLE::ShowRecInfo() const
{
	cout << "�� ���: " << '[' << upLeft.GetX() << "," << upLeft.GetY() << ']' << endl;
	cout << "�� �ϴ�: " << '[' << lowRight.GetX() << "," << lowRight.GetY() << ']' << endl;
}

