#include "stdafx.h"

// 클래스 생성자 
// 클래스의 이름과 함수의 이름이 동일
// 반환형이 선언되어 있지 않으며, 실제로 반환하지 않음
// 객체 생성시 딱 한 번만 호출된다.
// 생성자도 함수의 일종이니 오버로딩이 가능
// 생성자도 함수의 일종이니 매개변수에 디폴트 값을 설정할 수 있음

class SimpleClass
{
private:
	int num1;
	int num2;

public:
	SimpleClass()
	{
		num1 = 0;
		num2 = 0;
	}

	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}

	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}

	/*SimpleClass(int n1 = 0, int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
	}*/

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main()
{
	SimpleClass sc1;
	sc1.ShowData();

	SimpleClass sc2(100);
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	sc3.ShowData();
}

// SimpleClass sc1();