#include <iostream>
using namespace std;

void square(int);  // unsigned int���̳� long���̸� ����
void square(double);
//int double Ÿ���� ��ǥ�ڷ���
//char short ���� �� ���� �ڷ����� ��ǥ int�� �ڵ�����ȯ float�� dobule�� �ڵ�����ȯ�� �ȴ�.

/*
//���� �߻����� �ڷ���ũ�Ⱑ ���۾Ƽ� �����÷�
void square(short);  // unsigned int���̳� long���̸� ����
void square(float);
*/
int main()
{
	char ch='A';
	short sh=10;
	float ft=3.4f;
	double db=3.4;

	square(ch);  // square(int) ȣ�� �Ͻ��� ����ȯ
	square(sh);  // square(int) ȣ��
	square(ft);  // square(double) ȣ��
	square(db);  // square(double) ȣ��

	return 0;
}

void square(int a)
{
	cout << "int������ ȣ�� : " << a*a << endl;
}

void square(double a)
{
	cout << "double������ ȣ�� : " << a*a << endl;
}
/*
void square(short a)
{
	cout << "int������ ȣ�� : " << a << endl;
}

void square(float a)
{
	cout << "double������ ȣ�� : " << a << endl;
}
*/