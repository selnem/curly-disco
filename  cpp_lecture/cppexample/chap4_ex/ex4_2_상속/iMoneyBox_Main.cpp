#include<iostream>
using namespace std;
#include "iMoneyBox.h"
int main()
{
	iMoneyBox a("ö��", 100, 2000), b("����", 500, 3000);

	a.save(600);
	b.use(100);
	cout << a.getName() << " " << a.getSum() << " " << a.getLimit() << endl;
	cout << b.getName() << " " << b.getSum() << " " << b.getLimit() << endl;
	cout << "ö�����������뷮: " << a.check() << '%' << endl;
	cout << "�������������뷮: " << b.check() << '%' << endl;
	return 0;
}
