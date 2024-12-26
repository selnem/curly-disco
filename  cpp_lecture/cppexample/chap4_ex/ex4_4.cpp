#include<iostream>
using namespace std;

class Base{  // �⺻Ŭ����
	int va;
public:
	Base() { va=10;}
	void view() { cout << "Base view..." <<va<< endl; }
};
class Derived : public Base{  // �Ļ�Ŭ����
	int vb;
public:
	Derived() { vb = 22; }
	void view()  // view�Լ��� ������
	{ cout << "Derived view..." << vb << endl; }  
};
int main()
{
	Base a;
	Derived b;

	Base *bp=&a;
	Derived *dp=&b;
	bp->view();  // �⺻Ŭ������ viewȣ��
	dp->view();  // �Ļ�Ŭ������ �����ǵ� viewȣ��

	bp = &b;     // ���� ĳ����(up-casting) - �ڵ�(�Ͻ���) ����ȯ ����
	bp->view();  // �⺻Ŭ������ view()ȣ��

	dp = (Derived *)&a;// ���� ĳ����(down-casting) - ����(�����) ����ȯ �ʼ�
	dp->view(); // �Ļ�Ŭ������ view()ȣ�� (vb����� �ڸ����� ������ ��µɱ�?)

	return 0;
}
