#include <iostream>
using namespace std;
#include <stdlib.h>
int mod(int x, int y);
int main()
{
	int a, b, res;

	cout << "�� ���� �Է� : ";
	cin >> a >> b;
	try {
		res = mod(a, b);
	}
	catch (const char *s) {
		cout << s << endl;
		exit(1);
	}
	cout << a << "�� " << b << "�� ���� �� : " << res << endl;

	return 0;
}

int mod(int x, int y)
{
	if (y == 0) {
		throw "0���� ���� �� �����ϴ�.";
	}
	return x / y;
}
