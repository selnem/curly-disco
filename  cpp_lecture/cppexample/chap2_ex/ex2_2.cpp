#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>

using namespace std;
// Ŭ���� ����
class MoneyBox {
private:
	char name[20];
	int sum;
public:
	MoneyBox();  // ����Ʈ ������
	MoneyBox(const char* np, int m = 0);  // �����ε�� ������
	MoneyBox(const MoneyBox& br);  // ���� ������
	~MoneyBox() { } // �Ҹ��� 
	void save(int m);
	void use(int m);
	void prn();
};
// ����Լ� ����
MoneyBox::MoneyBox()
{
	strcpy(this->name, "�ƹ���");
	this->sum = 0;
	cout << "����Ʈ ������ ȣ��..." << this->name << endl;
}

MoneyBox::MoneyBox(const char* np, int m)
{
	strcpy(this->name, np);
	this->sum = m;
	cout << "�����ε�� ������ ȣ��..." << this->name << endl;
}

MoneyBox::MoneyBox(const MoneyBox& br)
{
	strcpy(this->name, br.name);
	this->sum = br.sum;
	cout << "���� ������ ȣ��..." << this->name << endl;
}

void MoneyBox::save(int m)
{
	if (m >= 0) { this->sum += m; }
}

void MoneyBox::use(int m)
{
	if (m > 0 && m <= this->sum) { this->sum -= m; }
}

void MoneyBox::prn()
{
	cout << "�̸� : " << this->name << endl;
	cout << "�ܾ� : " << this->sum << endl;
}

MoneyBox func(MoneyBox m);  // ��ü�� �����ϴ� �Ϲ��Լ�
int main()
{
	MoneyBox a;
	MoneyBox b("ȫ�浿");
	MoneyBox c("�̼���", 500);
	MoneyBox d = b;
	MoneyBox* mp1 = new MoneyBox("ȫ�浿");
	MoneyBox* mp2 = new MoneyBox(c);

	func(b);

	delete mp1;
	delete mp2;

	return 0;
}
MoneyBox func(MoneyBox m)
{
	return m;
}
