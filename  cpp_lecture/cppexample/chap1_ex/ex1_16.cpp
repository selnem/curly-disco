#include <iostream>
using namespace std;

#define SQUARE(x) x*x  // (x)*(x) �� �����Ͽ� �����غ���
inline int square(int x) { return x*x; } // �ζ��� �Լ��� ����

int main()
{
	int ires;
	int n = 5;
	ires=square(3+4);
	cout << "inline �Լ��� �̿��� 3+4�� �ŵ����� : " << ires << endl;
	
	n = 5;
	ires=SQUARE(3+4);
	cout << "��ũ�� �Լ��� �̿��� 3+4�� �ŵ����� : " << ires << endl;
	return 0;
}
