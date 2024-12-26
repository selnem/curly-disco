#include <iostream>
using namespace std;
#include "ex5_1_temp.h"

int main() {
	int a = 10, b = 20, ires;
	double x = 2.4, y = 3.5, dres;
	const char *ap = "apple";
	const char *bp = "banana";
	const char *resp;

	ires = max(a, b);  // int형 값으로 호출
	cout << "두 정수 중에서 큰 값 : " << ires << endl;
	dres = max(x, y);  // double형 값으로 호출
	cout << "두 실수 중에서 큰 값 : " << dres << endl;
	resp = max(ap, bp);
	cout << "두 문자열 중에서 큰 문자열 : " << resp << endl;

	return 0;
}
