// iMoneyBox의선언, 멤버함수의정의 (iMoneyBox.cpp)
#include <iostream>
using namespace std;
#include "iMoneyBox.h"

iMoneyBox::iMoneyBox(const char *np, int m, int l) : MoneyBox(np, m)//상속받은 부모 class객체 생성을 콜론초기화로 생성
{
	this->limit = l;
}
//-------------------------------------------------------------------------
int iMoneyBox::check()
{
	int temp;
	temp = int((double)this->getSum() / this->limit * 100);
	return temp;
}
//-------------------------------------------------------------------------
void iMoneyBox::setLimit(int limit)
{
	this->limit = limit;
}
//-------------------------------------------------------------------------
int iMoneyBox::getLimit()
{
	return this->limit;
}
