#include <iostream>
using namespace std;
#include "ex5_1_temp.h"

int main() {
	int a = 10, b = 20, ires;
	double x = 2.4, y = 3.5, dres;
	const char *ap = "apple";
	const char *bp = "banana";
	const char *resp;

	ires = max(a, b);  // int�� ������ ȣ��
	cout << "�� ���� �߿��� ū �� : " << ires << endl;
	dres = max(x, y);  // double�� ������ ȣ��
	cout << "�� �Ǽ� �߿��� ū �� : " << dres << endl;
	resp = max(ap, bp);
	cout << "�� ���ڿ� �߿��� ū ���ڿ� : " << resp << endl;

	return 0;
}
