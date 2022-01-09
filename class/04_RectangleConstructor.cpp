#include "04_Point.h"
#include "04_Rectangle.h"

int main()
{
	RECTANGLE rec(1, 1, 5, 5);
	rec.ShowRecInfo();
}

// 객체 생성과정 
// 1. 메모리 공간의 할당
// 2. 이니셜라이저를 이용한 멤버변수(객체)의 초기화
// 3. 생성자의 몸체부분 실행