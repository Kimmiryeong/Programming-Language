#pragma once
#include "04_Point.h"

#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

class RECTANGLE
{
private:
	Point upLeft;
	Point lowRight;

public:
	RECTANGLE(const int& x1, const int& y1, const int& x2, const int& y2);
	void ShowRecInfo() const;
};

#endif