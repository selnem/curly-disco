#include<iostream>
using namespace std;
class Person{
    private:
        char name[50];
        int age;
        double hight;
    public:
        //만약 밑의 생성자 함수가 없다면 컴파일러가 Person(){};를 집어넣어 초기화 하지않는 생성자만듬
        Person();
        Person(const Person &cpy);//복사생성자, 만약 안만들었다면 c++컴파일러는 default copy를 생성한다.(실제값을 복사하는 깊은복사)
        Person(const char*cp);
        Person(const char *cp,int a);
        void setName(const char*np);//인자에 (Person *const this,const char *np) 포인터변수명을 this로 고정!
        void setAge(int a);//this포인터 명시적으로 집어넣으면안된다. 이유,두번들어가기때문
        void prnName();
        void prnAge();

};

Person::Person(){
    strcpy(this->name,"no name");
    this->age=-1;
}
Person::Person(const Person &cpy){
    this->age=cpy.age;
    strcpy(this->name,cpy.name);
}
Person::Person(const char *cp){
    strcpy(this->name,cp);
    this->age=-1;
}
Person::Person(const char *cp,int a){
    strcpy(this->name,cp);
    this->age=a;
}
void Person::setName(const char *np){
    if(np!=NULL){
        strcpy(name,np);
    }
}
void Person::setAge(int a){
    if(a>=0){
        age=a;//this->age=a;로 this를 컴파일러가 알아서 집어넣어 호출
    }
    else{
        age=-1;//this->age=-1;로 명시적으로 표현해도 괜찮다
    }
}
void Person::prnAge(){
    cout<<age<<endl;
}
void Person::prnName(){
    cout<<name<<endl;
}
int main(){
    Person ob1,ob2;//Person()으로 1,2가 생성됨;
    ob1.setAge(23);//setAge함수 this 에 ob1주소를 보내줌;
    ob1.setName("hell");
    Person ob3("hello");//person(const char*)로 생성됨
    Person ob4("asdf",3);//person(const char*,int)로 생성됨
    Person ob5(ob1);//복사생성자로 생성된


    return 0;
}