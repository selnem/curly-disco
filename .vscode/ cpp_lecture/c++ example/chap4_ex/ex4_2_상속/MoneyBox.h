#pragma once
// �⺻Ŭ����(MoneyBox) ����
#include<string>
using namespace std;
class MoneyBox {
private:
	string name;  // ������
	int sum;   // �ܾ�
public:
	MoneyBox(const char *np = "�ƹ���", int m = 0); // �����ε�������
	MoneyBox(const MoneyBox &br);  // ���������
	void save(int m);      // ����
	void use(int m);       // ���
	void setName(string name);   // name�������
	string getName();            // name���������
	void setSum(int sum);          // sum�������
	int getSum();                  // sum���������	
};