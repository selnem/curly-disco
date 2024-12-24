#include <iostream>
using namespace std;
class Letter {
private:
	const char ch;  // const �����͸��
	int num;
public:
	Letter(char c = '*', int n = 0);
	void n_prn();
	void c_prn() const;  // const ����Լ�
	void show();
};

Letter::Letter(char c, int n) : ch(c)
{
	num = n;
}

void Letter::n_prn()
{
	// ch='@';  -> ����, const �����͸���� ������ �� ����.
	num += 10;
	cout << "const�� �ƴ� ����Լ� ȣ��..." << endl;
	show();
}

void Letter::c_prn() const
{
	// num+=10;  -> ����, const����Լ��̹Ƿ� ������ �� ����.
	cout << "const ����Լ� ȣ��..." << endl;
	// show();  -> ����, const����Լ��� �Ϲ� ����Լ� ȣ��Ұ�
}

void Letter::show()
{
	int i;
	for (i = 0; i < num; i++) {
		cout << ch;
	}
	cout << endl;
}

int main()
{
	Letter a('@', 5);
	const Letter b('#', 3);

	a.n_prn();  // non const ����Լ� ȣ��
	a.c_prn();
	//b.n_prn();  //-> ����, const��ü�� const�� �ƴ� ��� ȣ��Ұ�
	b.c_prn();  // const ����Լ� ȣ��

	return 0;
}
