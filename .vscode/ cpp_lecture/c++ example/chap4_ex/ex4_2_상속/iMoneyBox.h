#pragma once
#include "MoneyBox.h"

class iMoneyBox : public  MoneyBox
{
private:
	int limit;  // ���������Ѱ�ݾ��������ϱ������߰��ȵ����͸��
public:
	iMoneyBox(const char *np = "�ƹ���", int m = 0, int l = 1000); // ������
	void setLimit(int limit);   // limit �������
	int getLimit();             // limit ����ǰ�����
	int check();                // �����뷮�˻�
};
