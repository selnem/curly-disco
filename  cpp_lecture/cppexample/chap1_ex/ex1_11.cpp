#include<iostream>
using std::cout;
using std::endl;
namespace // �ش� ���Ͽ����� ���ٰ���(Internal Linkage)
{
	int number = 10;
	void func()
	{
		cout << "func" << endl;
	}
}
int main()
{
	cout << number << endl;
	func();
	return 0;
}
