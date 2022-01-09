#include "stdafx.h"

class Person
{
private:
	char*	name;
	int		age;

public:

	// Person Ŭ���� ������
	Person(const char* myName, int myAge)
	{
		int len = strlen(myName) + 1;
		name = new char[len];
		strcpy_s(name, len, myName);
		age = myAge;
	}

	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}

	~Person()
	{
		delete	[]name;
		cout << "called destructor!" << endl;
	}

};

// ��ü ������ �ݵ�� ȣ��Ǵ� ���� �����ڶ��, ��ü �Ҹ�� �ݵ�� ȣ��Ǵ� ���� �Ҹ����̴�. 
// �Ҹ����� ����
// Ŭ���� �̸� �տ� '~'�� ���� ������ �̸��� ����
// ��ȯ���� ����Ǿ� ���� ������, ������ ��ȯ���� ����
// �Ű������� void������ ����Ǿ�� �ϱ� ������ �����ε���, ����Ʈ �� ������ �Ұ���

int main()
{
	Person man1("Lee dong woo", 20);
	Person man2("Jang dong gun", 51);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
}