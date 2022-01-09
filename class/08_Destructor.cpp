#include "stdafx.h"

class Person
{
private:
	char*	name;
	int		age;

public:

	// Person 클래스 생성자
	Person(const char* myName, int myAge)
	{
		int len = strlen(myName) + 1;
		name = new char[len];
		strcpy_s(name, len, myName);
		age = myAge;
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}

	~Person()
	{
		delete	[]name;
		cout << "called destructor!" << endl;
	}

};

// 객체 생성시 반드시 호출되는 것이 생성자라면, 객체 소멸시 반드시 호출되는 것은 소멸자이다. 
// 소멸자의 형식
// 클래스 이름 앞에 '~'가 붙은 형태의 이름을 갖음
// 반환형이 선언되어 있지 않으며, 실제로 반환하지 않음
// 매개변수는 void형으로 선언되어야 하기 때문에 오버로딩도, 디폴트 값 설정도 불가능

int main()
{
	Person man1("Lee dong woo", 20);
	Person man2("Jang dong gun", 51);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
}