#include "stdafx.h"

// 멤버 이니셜라이저를 이용한 변수 및 const상수 초기화
// 이점
// 초기화의 대상을 명확히 인식할 수 있다.
// 성능에 약간의 이점이 있다.
// 이니셜라이저를 이요하면 선언과 동시에 초기화가 이뤄지는 형태로 바이너리 코드가 생성된다.

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
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl;
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
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl;
	}
};

int main()
{
	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSaleResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
}

// const변수와 const상수
// const는 변수를 상수화시키는 키워드이다. 따라서 const 선언에 의해서 상수화 된 변수를 가리켜 const변수라고도 하고
// const 상수라고도 한다. 즉, 이 둘은 같은 의미로 상용이 된다. 