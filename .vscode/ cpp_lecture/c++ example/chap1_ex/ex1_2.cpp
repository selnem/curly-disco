#include<iostream>
using namespace std;
void my_flush();
int main()
{
	int num;
	cin >> num;
	while (cin.fail()) // cin�Է��� �����ߴ��� �˻� -
	{ // cin��ü flag�� �˻��ؼ� �Է��� �����ϸ� true���� ����
		my_flush(); // cin �Է¹��ۿ� ��� �ִ� ���ʿ��� �����͸� ������
		// C���� ���Ǵ� fflush(stdin)�� ������ �����.
		cin >> num; // �ٽ� �Է��� �õ� ��.
	}
	cout << "num=" << num << endl;
	return 0;
}
//------------------------------------------------------------------------
void my_flush() // ����ڰ� ���� cin�Է¹��� ������Լ�
{
	cin.clear(); // cin�� ��üflag���� 0���� ����- �� �κ��� ������ cin �Է� �õ���
	// ���� �ʰ� ������ ���з� �νĵǾ� ����loop�� ����
	while (cin.get() != '\n'); // cin�Է� ���۳��� ��� ������ ����
}
