#include <iostream>
using namespace std;
#include <string.h>
// MoneyBox Ŭ���� ����
class MoneyBox {
	friend class Fund;  // ������ Ŭ���� ����
private:
	char name[20];
	int sum;
public:
	MoneyBox(const char *np = "�ƹ���", int m = 0);
	void save(int m);
	void use(int m);
	friend ostream &operator<<(ostream &os, MoneyBox &br);
};

// Fund Ŭ���� ����
class Fund {
private:
	int sum;
public:
	Fund(int m = 0);
	void donate(MoneyBox &br, int m);  // ��� �Լ�
	friend ostream &operator<<(ostream &os, Fund &br);
};

// MoneyBox Ŭ������ ����Լ� ����
MoneyBox::MoneyBox(const char *np, int m)
{
	strcpy(name, np);
	sum = m;
}

void MoneyBox::save(int m)
{
	sum += m;
}

void MoneyBox::use(int m)
{
	sum -= m;
}

// Fund Ŭ������ ����Լ� ����
Fund::Fund(int m)
{
	sum = m;
}

void Fund::donate(MoneyBox &br, int m)
{
	if (m > br.sum) {
		cout << "�ܾ��� �����մϴ�!" << endl;
		return;
	}
	br.sum -= m;
	sum += m;
	cout << br.name << "���� " << m << "�� ����ߴ�." << endl;
}

// ��¿����� �������Լ� ����
ostream &operator<<(ostream &os, MoneyBox &br);
ostream &operator<<(ostream &os, Fund &br);
// �����Լ�
int main()
{
	MoneyBox a("ö��", 100), b("����", 500);
	Fund angel;

	cout << "��� �� �ܾ�..." << endl;
	cout << a << b << endl;

	angel.donate(a, 50);
	angel.donate(b, 200);

	cout << "\n��� �� �ܾ�..." << endl;
	cout << a << b << endl;

	cout << angel << endl;

	return 0;
}

// ��¿����� �������Լ� ����
ostream &operator<<(ostream &os, MoneyBox &br)
{
	os << "�̸� : " << br.name << ", ";
	os << "�ܾ� : " << br.sum << endl;
	return os;
}

ostream &operator<<(ostream &os, Fund &br)
{
	cout << "������� ������ : " << br.sum;
	return os;
}
