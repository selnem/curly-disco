#include <iostream>
using namespace std;
void square(int);  // unsigned int���̳� long���̸� ����
void square(double);

int main()
{
	char ch='A';
	short sh=10;
	float ft=3.4f;
	double db=3.4;

	square(ch);  // square(int) ȣ��
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
