#include "stdafx.h"

// ��� �̴ϼȶ������� �̿��� ���� �� const��� �ʱ�ȭ
// ����
// �ʱ�ȭ�� ����� ��Ȯ�� �ν��� �� �ִ�.
// ���ɿ� �ణ�� ������ �ִ�.
// �̴ϼȶ������� �̿��ϸ� ����� ���ÿ� �ʱ�ȭ�� �̷����� ���·� ���̳ʸ� �ڵ尡 �����ȴ�.

class FruitSeller
{
private:
	const int	 APPLE_PRICE;
	int			 numOfApples;
	int			 myMoney;

public:
	FruitSeller(int price, int num, int money)
		:APPLE_PRICE(price), numOfApples(num), myMoney(money)
	{

	}

	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return money;
	}

	void ShowSaleResult() const
	{
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl;
	}
};

class FruitBuyer
{
private:

	int numOfApples;
	int myMoney;

public:
	FruitBuyer(int money)
		:myMoney(money)
	{

	}

	void BuyApples(FruitSeller& seller, int money)
	{
		myMoney -= money;
		numOfApples += seller.SaleApples(money);
	}

	void ShowBuyResult() const
	{
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl;
	}
};

int main()
{
	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000);
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSaleResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();
}

// const������ const���
// const�� ������ ���ȭ��Ű�� Ű�����̴�. ���� const ���� ���ؼ� ���ȭ �� ������ ������ const������� �ϰ�
// const ������ �Ѵ�. ��, �� ���� ���� �ǹ̷� ����� �ȴ�. 