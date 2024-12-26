#include <iostream>
using namespace std;
#include <stdlib.h>
int mod(int x, int y);
int main()
{
	int a, b, res;

	cout << "두 정수 입력 : ";
	cin >> a >> b;
	try {
		res = mod(a, b);
	}
	catch (const char *s) {
		cout << s << endl;
		exit(1);
	}
	cout << a << "를 " << b << "로 나눈 몫 : " << res << endl;

	return 0;
}

int mod(int x, int y)
{
	if (y == 0) {
		throw "0으로 나눌 수 없습니다.";
	}
	return x / y;
}
