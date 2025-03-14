#include <iostream>
using namespace std;
#include <cstring>
// 클래스 선언
class MoneyBox {
private:
	char *name;
	int sum;
public:
	MoneyBox(const char *np = "아무개", int m = 0);  // 생성자
	MoneyBox(const MoneyBox &br);  // 복사 생성자
	~MoneyBox();  // 소멸자
	MoneyBox &operator=(const MoneyBox &br);  // 대입연산자
	void save(int m);
	void use(int m);
	void prn();
};

// 멤버함수 정의
MoneyBox::MoneyBox(const char *np, int m)
{
	name = new char[strlen(np) + 1];
	strcpy(name, np);
	sum = m;
}

MoneyBox::MoneyBox(const MoneyBox &br)
{
	name = new char[strlen(br.name) + 1];
	strcpy(name, br.name);
	sum = br.sum;
}

MoneyBox::~MoneyBox()
{
	delete[] name;
}

MoneyBox &MoneyBox::operator=(const MoneyBox &br)
{
	if (this == &br) return *this;
	delete[] name;
	name = new char[strlen(br.name) + 1];
	strcpy(name, br.name);
	sum = br.sum;
	return *this;
}

void MoneyBox::save(int m)
{
	sum += m;
}

void MoneyBox::use(int m)
{
	sum -= m;
}

void MoneyBox::prn()
{
	cout << "이름 : " << name << endl;
	cout << "잔액 : " << sum << endl;
}

// 메인 함수
int main()
{
	MoneyBox a("철이", 100), b("메텔", 500), temp;
	a.prn();
	b.prn();
	temp = a;
	a = b;
	b = temp;
	a.prn();
	b.prn();
	a = b = temp;  // 연속사용 가능
	a = a;  // 자신에 대입 가능

	return 0;
}
