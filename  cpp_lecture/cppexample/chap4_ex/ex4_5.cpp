#include<iostream>
using namespace std;
class Animal
{
public:
	/*void show() { 
		cout << "동물입니다.\n";
	}
	*/
	virtual void show() { 
		cout << "동물입니다.\n";
	}
	//출력값고양입니다로 바뀜(동적 바인딩)
};
class Cat : public Animal
{
public:
	void show(){
		cout << "고양이입니다.\n";
	}
};

int main()
{
	Animal a_ob;
	Cat c_ob;
	a_ob.show();
	c_ob.show();

	Animal * a_ptr;
	a_ptr = &a_ob;
	a_ptr->show();
	a_ptr = &c_ob;
	a_ptr->show();
//animal 포인터는 animal객체만 가르킬 수 있다 따라서 c_ob객체속 상속받은 animal객체의 영역을 참조
//따라서 동물입니다 호출됨
	return 0;
}
