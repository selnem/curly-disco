#include<iostream>
using std::cout;
using std::endl;
int& func();
int main()
{
	int num = 7;
	num = func(num);
	cout << num << endl;
	return 0;
}
int &func()
{
	int a = 10;  // �ڵ�����
	return a;  
}
