#pragma warning(disable : 4996)
#include<iostream>
using namespace std;
#include<string.h>
class Wow
{
private:
	char name[20];
	int age;
public:
	Wow(const char * = "����", int = 0);
	~Wow(void) { };
	void update(const char *, int);
	void output();
};
Wow::Wow(const char *p, int n) : age(n)  // �ݷ��ʱ�ȭ
{
	strcpy(name, p); // name ����� �ݷ��ʱ�ȭ ����� ����� �� ����
}
void Wow::update(const char *p, int n)
{
	strcpy(name, p);
	age = n;
}
void Wow::output()
{
	cout << "* �̸� : " << name << endl;
	cout << "* ���� : " << age << endl;
}
int main()
{
	Wow person1;
	Wow person2("King", 20);
	Wow person3 = person2;
	person1.output();
	person3.output();
	person3.update("King Kong", 77);
	person3.output();
	return 0;
}
