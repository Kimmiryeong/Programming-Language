#include "stdafx.h"

// private 생성자
// 생성자들은 모두 public으로 선언되었음
// 클래스 내부에서만 객체의 생성을 허용하려는 목적으로 생성자를 private으로 선언하기도 함

class AAA
{
private:
	int num;

public:
	AAA() : num(0) {}
	AAA& CreateInitObj(int n) const
	{
		AAA* ptr = new AAA(n);
		return *ptr;
	}

	void ShowNum()const { cout << num << endl; }

private:
	AAA(int n):	num(n)	{}
};

int main()
{
	// public 생성자 정의. 클래스 외부에서는 이 생성자를 기반으로 객체를 생성해야함.
	AAA base;
	base.ShowNum();

	// 함수 내에서 private 생성자를 이용해서 AAA 객체 생성 및 반환
	AAA& obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);
	obj2.ShowNum();

	delete& obj1;
	delete& obj2;
}

// 힙 영역에 생성된 객체를 참조의 형태로 반환. 힙에 할돵된 메모리 공간은 변수로 간주하여, 참조가 가능