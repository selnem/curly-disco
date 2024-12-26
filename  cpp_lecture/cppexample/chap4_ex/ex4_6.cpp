#include <iostream>
using namespace std;
class Base
{
public:
	virtual void view() { cout << "Base view..." << endl; }
};

class Derived : public Base
{
public:
	virtual void view() { cout << "Derived view..." << endl; } // �Ļ�Ŭ������ virtual 
															   // Ű����� ���� ������
};

int main()
{
	Base a, *bp;
	Derived b;

	bp = &a;     // �⺻Ŭ������ ��ü ����
	bp->view();  // �⺻Ŭ������ view�Լ� ȣ��
	bp = &b;     // �Ļ�Ŭ������ ��ü ����
	bp->view();  // �Ļ�Ŭ������ view�Լ� ȣ��

	return 0;
}
