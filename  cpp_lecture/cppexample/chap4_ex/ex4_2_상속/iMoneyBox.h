#pragma once
#include "MoneyBox.h"

class iMoneyBox : public  MoneyBox
{
private:
	int limit;  // 저금통의한계금액을저장하기위해추가된데이터멤버
public://부모 Moneybox의 public 멤버 함수들을 상속 받아 사용(save,use,getName,setname...)
	iMoneyBox(const char *np = "아무개", int m = 0, int l = 1000); // 생성자
	void setLimit(int limit);   // limit 멤버수정
	int getLimit();             // limit 멤버의값리턴
	int check();                // 현재사용량검사
};
