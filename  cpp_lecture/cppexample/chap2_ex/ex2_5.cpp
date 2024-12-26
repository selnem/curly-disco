#include<iostream>
using namespace std;
class Sample {
private:
	int num;
	static int cnt;      // ����������� �����
public:
	Sample(int n = 0);
	void prn() const;
	static void setNum(int n);  // ��������Լ�����
};

int Sample::cnt = 0;  // ���� ������� ���Ǻ� 

void Sample::setNum(int n)  // ���� ����Լ� ����
{
	cnt = n;  // ���� ��������� ���� �����Ѵ�.
}
Sample::Sample(int n)  // �����ε�����������
{
	num = n;
	cnt++;  // ��ü�� ������ �� ���� 1�� �����Ѵ�.
}

void Sample::prn() const  // ��¸���Լ�����
{
	cout << "num : " << num << ", ";
	cout << "cnt : " << cnt << endl;
}

int main()
{
	int start;

	cout << "���۰����Է��ϼ���: ";
	cin >> start;
	Sample::setNum(start);  // ��ü ���� ���������� ȣ�� ���� 

	Sample a(10), b(20), c(30);  // ���۰�3���Է��ϸ顦
	a.prn();
	b.prn();
	c.prn();
	return 0;
}
