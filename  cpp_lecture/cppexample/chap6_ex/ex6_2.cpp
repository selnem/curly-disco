#include <iostream>
using namespace std;
int mod1(int x, int y);  // a�� b�� ���� ��
int mod2(int x, int y);  // 100�� a+b�� ���� ��

int main()
{
	int a, b, res1, res2;

	while (1) {
		cout << "�� ���� �Է� : ";
		cin >> a >> b;
		try {
			res1 = mod1(a, b);
			res2 = mod2(a, b);
			cout << "try����� ��..." << endl;
		}
		catch (const char *s) {
			cout << s << endl;
			cout << "���α׷� ����..." << endl;
			break;
		}
		catch (int n) {
			cout << "������ �� : " << n << endl;
			cout << "�ٽ� �Է��մϴ�..." << endl;
			continue;
		}

		cout << "res1 : " << res1 << endl;
		cout << "res2 : " << res2 << endl;
	}
	return 0;
}

int mod1(int x, int y)
{
	if (y == 0) throw "0���� ���� �� ����!";
	return x / y;
}

int mod2(int x, int y)
{
	if (x == -y) throw 0;
	return 100 / (x + y);
}
