#include<iostream>
using namespace std;

class Obj
{
public:
	Obj() 	{ cout << "Obj::Obj()" << endl;}
	~Obj() 	{ cout << "Obj::~Obj()" << endl;}

	void foo() const 	{ cout << "Obj::foo" << endl;}
	void goo() const 	{ cout << "Obj::goo" << endl;}
};
class SmartPointer
{
	Obj* po;
public:
	SmartPointer( Obj* p) : po(p) { }	
	Obj* operator->()	{ return po; }
	~SmartPointer() 	{ delete po; }
};
int  main()
{
	SmartPointer p( new Obj );
	p->goo();   // (p.operator->())->goo(); ÀÇ ÀÇ¹Ì
            
        return 0;
}
