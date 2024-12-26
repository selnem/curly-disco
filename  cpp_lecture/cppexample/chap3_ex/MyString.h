
class MyString {
private:
	char* str; // ���ڿ��� ������ �����͸��
	int len; // ���ڿ��� ���̸� ����
public:
	MyString(); // ����Ʈ ������
	MyString(const char* cp); // �����ε�� ������
	MyString(const MyString& br); // ���� ������
	~MyString(); // �Ҹ���
	MyString& operator=(const MyString& br); // ���Կ����� ����Լ�
	MyString operator+(const MyString& br); // ���� ������
	bool operator>(const MyString& br); // ���迬���� ����Լ�(���� ��)
	void operator<<(ostream& os); // ��¿����� ����Լ�
	void operator>>(istream& is); // �Է¿����� ����Լ�
};
ostream& operator<<(ostream& os, MyString& br); // ��� �Ϲ��Լ�
