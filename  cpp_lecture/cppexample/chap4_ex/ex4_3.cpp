#include <iostream>
using namespace std;
// �⺻Ŭ����
class Base
{
public:
	void func(char ch) { cout << "Base(char) : " << ch << endl; }
	void func(int in) { cout << "Base(int) : " << in << endl; }
};

// �����ǰ� ���� �Ļ�Ŭ����
class Derived : public Base {};

// �����ǰ� �ִ� �Ļ�Ŭ����
class rDerived : public Base
{
public:
	void func(char ch){	cout << "rDerived(char) : " << ch << endl; }
};

int main()
{
	Derived a;
	cout << "������ ���� �Ļ�Ŭ����..." << endl;
	a.func('A');
	a.func(10);

	rDerived b;
	cout << "�������� �Ļ�Ŭ����..." << endl;
	b.func('B');
	b.func(97);
	b.func(100.5);

	return 0;
}
