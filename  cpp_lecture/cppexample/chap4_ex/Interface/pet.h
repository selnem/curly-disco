#pragma once
#include<string>
using namespace std;
class Pet  // �ֿϵ��� Ŭ����
{
public : 
	typedef unsigned int age_t;
	enum PetKind { MAMMAL, FISH, BIRDS, UNKNOWN }; // ������, ���, ����, �𸣴� ��
private :
	string name;   // �ֿϵ�����
	PetKind kind;  // ��������
	age_t age;     // ����
public : 
	Pet(string name = "noname", PetKind kind = UNKNOWN, age_t age=0) : name(name), kind(kind), age(age)
	{}
	virtual ~Pet() {}
	virtual void eat();   // "���̸� �Խ��ϴ�" �޼��� ����ϱ�
	void view();  // �ֿϵ��� ������ ���ٷ� ����ϱ�
};