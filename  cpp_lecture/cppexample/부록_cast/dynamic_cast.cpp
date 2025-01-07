#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

class A {  // 기본 클래스
	int va;
public:
	A(int n = 0) : va(n) {}
	virtual ~A() {}
	virtual void view() { cout << "A class view..." << va << endl; }
};
class B : public A {  // 파생 클래스
	int vb;
public:
	B(int n = 0) : vb(n) {}
	void view()  // view함수의 재정의
	{
		cout << "B class view..." << vb << endl;
	}
	virtual void prn()
	{
		cout << "B class prn()... " << vb << endl;
	}
};

class C : public B {  // 파생 클래스
	int vc;
public:
	C(int n = 0) : vc(n) {}
	void view()  // view함수의 재정의
	{
		cout << "C class view..." << vc << endl;
	}
	void prn()  // prn함수의 재정의
	{
		cout << "C class prn() : vc = " << vc << endl;
	}
};

A *GetObject();

int main()
{
	srand(time(0));
	A *ap;
	B *bp;
	int i;

	for (i = 0; i<10; i++)
	{
		ap = GetObject();
		ap->view();
		/*
		if (bp = dynamic_cast<B *>(ap))//만약 A클래스포인터이기 때문에 (B*)로 강제캐스팅을 할시 몇몇 요소들이 degling이 되는 문제가 생김
										//ap가 B or C객체를 가르키는 경우 캐스팉 성공 A일시 실패 이후 NULL포인터 전달							
										//dynamic 캐스팅은 B포인터가 가르키는 데이터가 모두 있다면 형변환 하고 만약 없는요소가 있다면 형변환 x
		{
			bp->prn();
		}
		*/
		if(bp=dynamic_cast<C*>(ap)){
			cout<<"c ptn"<<endl;
		}
		else if(bp=dynamic_cast<B*>(ap)){
			cout<<"b ptn"<<endl;
		}
		else{
			cout<<"a ptn"<<endl;
		}
		delete ap;
	}
	

	return 0;
}

A * GetObject()
{
	A *p;

	switch (rand() % 3)
	{
	case 0: p = new A(10); break;
	case 1: p = new B(20); break;
	case 2: p = new C(30); break;
	default : p=NULL;
	}
	return p;
}
