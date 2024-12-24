#include <iostream>
using namespace std;
#include "ex5_2_temp.h"

int main()
{
	Temp<int> a(10);  // int형의 Temp클래스를 만들고 객체 생성
	Temp<double> b(3.5);  // double형 Temp를 만들고 객체 생성

	cout << a.get() << endl;
	b.put(2.4);
	cout << b.get() << endl;

	return 0;
}
