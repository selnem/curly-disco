#include <iostream>
using namespace std;
int mod1(int x, int y);  // a를 b로 나눈 몫
int mod2(int x, int y);  // 100을 a+b로 나눈 몫

int main()
{
	int a, b, res1, res2;

	while (1) {
		cout << "두 정수 입력 : ";
		cin >> a >> b;
		try {
			res1 = mod1(a, b);
			res2 = mod2(a, b);
			cout << "try블록의 끝..." << endl;
		}
		catch (const char *s) {
			cout << s << endl;
			cout << "프로그램 종료..." << endl;
			break;
		}
		catch (int n) {
			cout << "나누는 값 : " << n << endl;
			cout << "다시 입력합니다..." << endl;
			continue;
		}

		cout << "res1 : " << res1 << endl;
		cout << "res2 : " << res2 << endl;
	}
	return 0;
}

int mod1(int x, int y)
{
	if (y == 0) throw "0으로 나눌 수 없다!";
	return x / y;
}

int mod2(int x, int y)
{
	if (x == -y) throw 0;
	return 100 / (x + y);
}
