#include <iostream>
using namespace std;
void exchange(int x, int y);
int main()
{
	int a=10, b=20;
	cout << "�ٲٱ� �� a, b�� �� : ";
	cout << a << ' ' << b << endl;
	exchange(a, b);
	cout << "�ٲ� �� a, b�� �� : ";
	cout << a << ' ' << b << endl;
	return 0;
}
void exchange(int x, int y)  // �Ű������� ���������� ���
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
