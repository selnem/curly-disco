#include <iostream>
#include <string.h>
#include "Profile.h"
#include "MyString.h"
using namespace std;

void userScreen(void);
char menu(void);
int proInput(Profile *);
void proDisplay(Profile *, int);
void proUpdate(Profile *, int);

int main()
{
	userScreen();
	return 0;
}
//----------------------------------------------------------------------------------------------
void userScreen()
{
	Profile  ary[20];   // ������ ���� ��ü �迭
	int profileCnt;     // �Է� ���� �������� ���� ī��Ʈ ����
	char ch;          // �޴���ȣ ���� ���� 

	while (1)
	{
		ch = menu();        // �Էµ� �޴��� ��ȣ�� ch�� ���Ϲ���
		if (ch == '4') { break; }  // 4�� �����ϱ� �޴� �Է½� ���ѹݺ����� Ż��
		switch (ch)
		{
		case '1': profileCnt = proInput(ary); break;
		//case '2' : proUpdate(ary,profileCnt); break;
		case '3': proDisplay(ary, profileCnt); break;
		}
	}
}
//----------------------------------------------------------------------------------------------
char menu(void)
{
	char n = 0, i;
	char menulist[4][20] = { "������ �Է�", "������ ����", "������ ���","����" };

	for (i = 0; i<4; i++)   // �޴� ���ڿ��� ����ϴ� �ݺ���
	{
		cout << i + 1 << ". " << menulist[i] << endl;
	}

	while (n<'1' || n>'4') // ��ȿ�� ��ȣ�� �ƴϸ� �ٽ� �Է�
	{
		cout << "* Select menu No. : _\b";
		cin >> n;
	}
	return(n);
}
//--------------------------------------------------------------------------------------------
int proInput(Profile *ap)
{
	char name[50];
	char addr[80];
	int age;
	double height;
	int cnt = 0;  // �Է� ���� �������� ������ ī��Ʈ�ϴ� ����

	while (1)
	{
		cout << "�̸��Է� : ";
		cin >> name;
		if (strcmp(name, "��") == 0) { break; }
		cout << "�ּ��Է� : ";		cin >> addr;
		cout << "�����Է� : ";		cin >> age;
		cout << "Ű�Է� : ";		cin >> height;

		ap[cnt] = Profile(name, addr, age, height); // �Է� ���� �����ͷ� ��ü �ʱ�ȭ
		cnt++;
	}
	return cnt;
}
//---------------------------------------------------------------
void proDisplay(Profile *ap, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		cout << i + 1 << "." << ap[i].getName().getStr() << " : "
			<< ap[i].getAddr().getStr() << "/" << ap[i].getAge() << "��/"
			<< ap[i].getHeight() << "cm" << endl;
	}
	cout << endl;
}
void proUpdate(Profile *ap, int cnt)
{
	// TODO
}