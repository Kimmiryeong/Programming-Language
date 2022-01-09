#include "stdafx.h"
// �̴ϼȶ������� �̷��� Ư¡�� ��������� �����ڸ� ������ �� �ְ���

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

// ����Ʈ ������
// ��ü�� �Ǳ� ���ؼ��� �ݵ�� �ϳ��� �����ڰ� ȣ��Ǿ���Ѵ�.
// AAA * ptr = new AAA; -> ������ ȣ��
// AAA * ptr = (*AAA)malloc(sizeof(AAA)); -> ������ ȣ�� (X)

// ������ ����ġ
