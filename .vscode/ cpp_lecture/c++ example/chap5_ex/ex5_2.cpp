#include <iostream>
using namespace std;
#include "ex5_2_temp.h"

int main()
{
	Temp<int> a(10);  // int���� TempŬ������ ����� ��ü ����
	Temp<double> b(3.5);  // double�� Temp�� ����� ��ü ����

	cout << a.get() << endl;
	b.put(2.4);
	cout << b.get() << endl;

	return 0;
}
