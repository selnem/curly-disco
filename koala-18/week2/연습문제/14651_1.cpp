#include<iostream>

using namespace std;

int n;

int main() {
	cin >> n;

	if (n == 1) cout << 0;
	else if (n == 2) cout << 2;
	else {
		long long res = 2;
		for (int i = 2; i < n; i++) {
			res *= 3;
			res = res % 1000000009;
		}
		cout << res;
	}

	return 0;
}