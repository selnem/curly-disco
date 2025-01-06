#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>

using namespace std;
// 클래스 선언
class MoneyBox {
private:
	char* name;
	int sum;
public:
	MoneyBox();  // 디폴트 생성자
	MoneyBox(const char* np, int m = 0);  // 오버로디드 생성자
	MoneyBox(const MoneyBox& br);  // 복사 생성자
	~MoneyBox() {
		cout<<"del"<<this->name<<endl;
		delete[] name;
	} // 소멸자 
	void save(int m);
	void use(int m);
	void prn();
};
// 멤버함수 정의
MoneyBox::MoneyBox()
{	
	name=new char[sizeof("아무개")];
	strcpy(name,"아무개");
	this->sum = 0;
	cout << "디폴트 생성자 호출..." << this->name << endl;
}

MoneyBox::MoneyBox(const char* np, int m)
{
	this->name=new char[strlen(np)+1];
	strcpy(this->name, np);
	this->sum = m;
	cout << "오버로디드 생성자 호출..." << this->name << endl;
}

MoneyBox::MoneyBox(const MoneyBox& br)
{	
	this->name=new char[strlen(br.name)+1];
	strcpy(this->name, br.name);
	this->sum = br.sum;
	cout << "복사 생성자 호출..." << this->name << endl;
}

void MoneyBox::save(int m)
{
	if (m >= 0) { this->sum += m; }
}

void MoneyBox::use(int m)
{
	if (m > 0 && m <= this->sum) { this->sum -= m; }
}

void MoneyBox::prn()
{
	cout << "이름 : " << this->name << endl;
	cout << "잔액 : " << this->sum << endl;
}

//MoneyBox &func(MoneyBox &m);  // 객체를 리턴하는 일반함수
MoneyBox func(MoneyBox m);
int main(){
	MoneyBox a;
	MoneyBox b("홍길동");
	MoneyBox c("이순신", 500);
	MoneyBox d = b;
	MoneyBox* mp1 = new MoneyBox("홍길동");
	MoneyBox* mp2 = new MoneyBox(c);

	MoneyBox temp = func(b);//임시 객체 문장종료시 사라진다.

	delete mp1;
	delete mp2;

	return 0;
}
/*
MoneyBox &func(MoneyBox &m)// call by value => make temp m and copy value
{
	return m;//리턴할 때에는 임시공간 또 만들어서 복사하여 값 반환!!!!!! 위의 m은 return 만나자마자 소멸
}
*/
MoneyBox func(MoneyBox m)// call by value => make temp m and copy value
{
	return m;//리턴할 때에는 임시공간 또 만들어서 복사하여 값 반환!!!!!! 위의 m은 return 만나자마자 소멸
}