#include <iostream>
using namespace  std;

class Time {
private:
	int hour;  // �ð��� ������ �����͸��
	int min;  // ���� ������ �����͸��
public:
	Time(int h = 0, int m = 0);  // ������
	Time operator*(int);  // ������ ���ϴ� ������ ����Լ�
	void operator<<(ostream &os);  // ��¿����� ����Լ�
	void operator>>(istream &is);  // �Է¿����� ����Լ�
};

Time::Time(int h, int m)
{
	hour = h;
	min = m;
}

Time Time::operator*(int n)  // ���ϴ� �������� �Ű������� �޴´�.
{
	int h, m;
	h = hour * n;
	m = min * n;
	if (m >= 60) {
		h += m / 60;
		m = m % 60;
	}
	return Time(h, m);
}

void Time::operator<<(ostream& os)
{
	os << hour << "�ð� " << min << "��" << endl;
}

void Time::operator>>(istream& is)
{
	is >> hour >> min;
}

Time operator*(int n, Time &a);
ostream &operator<<(ostream &os, Time &br);
istream &operator>>(istream &is, Time &br);

int main()
{
	Time a, b;
	cout << "�ð��� ���� �Է��ϼ��� : ";
	cin >> a;
	b = 3 * a;  // a.operator*(3) ȣ��, a�� �ð��� �п� ���� 3�� ����
	cout << a << b;

	return 0;
}

Time operator*(int n, Time &a)  // 3*a�� a*3���� �ٲٴ� �Ϲ��Լ�
{
	return a * n;  // �������ڷ� ���� ���� ��ġ�� �ٲپ� �����Ѵ�.
}

ostream &operator<<(ostream &os, Time &br)  // ��� �Ϲ��Լ�
{
	br << os;
	return os;
}

istream &operator>>(istream &is, Time &br)  // �Է� �Ϲ��Լ�
{
	br >> is;
	return is;
}
