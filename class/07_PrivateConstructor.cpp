#include "stdafx.h"

// private ������
// �����ڵ��� ��� public���� ����Ǿ���
// Ŭ���� ���ο����� ��ü�� ������ ����Ϸ��� �������� �����ڸ� private���� �����ϱ⵵ ��

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
	// public ������ ����. Ŭ���� �ܺο����� �� �����ڸ� ������� ��ü�� �����ؾ���.
	AAA base;
	base.ShowNum();

	// �Լ� ������ private �����ڸ� �̿��ؼ� AAA ��ü ���� �� ��ȯ
	AAA& obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);
	obj2.ShowNum();

	delete& obj1;
	delete& obj2;
}

// �� ������ ������ ��ü�� ������ ���·� ��ȯ. ���� �҉��� �޸� ������ ������ �����Ͽ�, ������ ����