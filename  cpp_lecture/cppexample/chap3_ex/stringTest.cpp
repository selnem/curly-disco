#include <iostream>
#include <string>
using namespace std;
int main()
{
	string temp;
	cout << "���� ���� ���ڿ� �Է� : ";
	cin >> temp;
	cout << "���� ���� ���ڿ� �Է� ��� : " << temp << endl;
	cin.ignore(); // �Է� ���ۿ��� ���� ���� ����
	cout << "���� �ִ� ���ڿ� �Է� : ";
	getline(cin, temp);
	cout << "���� �ִ� ���ڿ� �Է� ��� : " << temp << endl;
	return 0;
}
