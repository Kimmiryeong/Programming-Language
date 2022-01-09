#include "04_Rectangle.h"
#include "stdafx.h"

RECTANGLE::RECTANGLE(const int& x1, const int& y1, const int& x2, const int& y2)
	:upLeft(x1, y1), lowRight(x2, y2)
{

}

void RECTANGLE::ShowRecInfo() const
{
	cout << "좌 상단: " << '[' << upLeft.GetX() << "," << upLeft.GetY() << ']' << endl;
	cout << "우 하단: " << '[' << lowRight.GetX() << "," << lowRight.GetY() << ']' << endl;
}

