#include<iostream>
#include<iomanip> // setprecision, setw ����� ���� ��Ŭ���
using namespace std;
int main()
{
	int number = 12;
	cout << showbase;
	cout << "10���������: " << number << endl;
	cout << "16���������: " << hex << number << endl;
	cout << " 8���������: " << oct << number << endl;
	double dnumber = 7.12345;
	cout << setprecision(3);
	cout << dnumber << endl; // ��ȿ���� 3�ڸ� ���
	cout << fixed;
	cout << dnumber << endl; // fixed ��� - �Ҽ��� ����3�ڸ� ���
	cout << scientific;
	cout << dnumber << endl; // scientific ��� - �Ҽ������� 3�ڸ� ���
	cout << "|" << setw(10) << number << "|" << setw(15) << dnumber << "|" << endl;
	cout << left;
	cout << "|" << setw(10) << number << "|" << setw(15) << dnumber << "|" << endl;
	cout << right;
	cout << "|" << setw(10) << number << "|" << setw(15) << dnumber << "|" << endl;
	return 0;
}
