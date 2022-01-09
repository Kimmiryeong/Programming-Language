#include "stdafx.h"
// 이니셜라이저의 이러한 특징은 멤버변수로 참조자를 선언할 수 있게함

class AAA
{
public:
	AAA()
	{
		cout << "empty object" << endl;
	}

	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA&		 ref;
	const int&	 num;

public:
	BBB(AAA& r, const int& n)
		:ref(r), num(n)
	{
	}

	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num" << endl;
	}
};

int main()
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();
}

// 디폴트 생성자
// 객체가 되기 위해서는 반드시 하나의 생성자가 호출되어야한다.
// AAA * ptr = new AAA; -> 생성자 호출
// AAA * ptr = (*AAA)malloc(sizeof(AAA)); -> 생성자 호출 (X)

// 생성자 불일치
