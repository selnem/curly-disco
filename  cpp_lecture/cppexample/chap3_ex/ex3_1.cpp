#include <iostream>
using namespace std;
#include <cstring>
// Ŭ���� ����
class MoneyBox {
private:
	char *name;
	int sum;
public:
	MoneyBox(const char *np = "�ƹ���", int m = 0);  // ������
	MoneyBox(const MoneyBox &br);  // ���� ������
	~MoneyBox();  // �Ҹ���
	MoneyBox &operator=(const MoneyBox &br);  // ���Կ�����
	void save(int m);
	void use(int m);
	void prn();
};

// ����Լ� ����
MoneyBox::MoneyBox(const char *np, int m)
{
	name = new char[strlen(np) + 1];
	strcpy(name, np);
	sum = m;
}

MoneyBox::MoneyBox(const MoneyBox &br)
{
	name = new char[strlen(br.name) + 1];
	strcpy(name, br.name);
	sum = br.sum;
}

MoneyBox::~MoneyBox()
{
	delete[] name;
}

MoneyBox &MoneyBox::operator=(const MoneyBox &br)
{
	if (this == &br) return *this;
	delete[] name;
	name = new char[strlen(br.name) + 1];
	strcpy(name, br.name);
	sum = br.sum;
	return *this;
}

void MoneyBox::save(int m)
{
	sum += m;
}

void MoneyBox::use(int m)
{
	sum -= m;
}

void MoneyBox::prn()
{
	cout << "�̸� : " << name << endl;
	cout << "�ܾ� : " << sum << endl;
}

// ���� �Լ�
int main()
{
	MoneyBox a("ö��", 100), b("����", 500), temp;
	a.prn();
	b.prn();
	temp = a;
	a = b;
	b = temp;
	a.prn();
	b.prn();
	a = b = temp;  // ���ӻ�� ����
	a = a;  // �ڽſ� ���� ����

	return 0;
}
