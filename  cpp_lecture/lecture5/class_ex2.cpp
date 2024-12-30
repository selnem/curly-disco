#include<iostream>
#include<string.h>

using namespace std;

class MoneyBox{
    private:
        char name[20];
        int sum;
    public:
        MoneyBox();
        MoneyBox(const char *np,int m=0);//overlorded 생성자
        MoneyBox(const MoneyBox&br);//깊은복사 생성자 만약 동적할당이 있는 맴버변수를 다룰때 따로선언
        ~MoneyBox(){};//소멸자 그리고 선언없이 바로 정의, 자동 inline 함수 동적할당이 있다면 할당해제를 따로해주어야하므로 따로선언사용
        void save(int m);//짧은 코드들은 inline으로 만들어도 좋다.
        void use(int m);
        void prn();
};

MoneyBox::MoneyBox(){
    strcpy(this->name,"아무개");
    this->sum=0;
    cout<<"디폴트 생성자 호출..."<<this->name<<endl;
}

MoneyBox::MoneyBox(const char *np,int m){
    strcpy(this->name,np);
    this->sum=m;
    cout<<"오버로디드 생성자 호출..."<<this->name<<endl;
}
MoneyBox::MoneyBox(const MoneyBox&br){
    strcpy(this->name,br.name);
    this->sum=br.sum;
    cout<<"복사 생성자 호출..."<<this->name<<endl;
}

void MoneyBox::save(int m){
    if(m>-0){
        this->sum+=m;
    }
}
void MoneyBox::use(int m){
    if(m>0&&m<=this->sum){
        this->sum-=m;
    }
}
void MoneyBox::prn(){
    cout<<"이름 : "<<this->name<<endl;
    cout<<"잔액"<<this->sum<<endl;
}
MoneyBox fuc(MoneyBox m);
int main(){
    MoneyBox a;
    MoneyBox b("홍길동");
    MoneyBox c("이순신",500);
    MoneyBox d=b;//MoneyBox d(b);와 동일 전달인자가 하나일경우에는 =연산자로도 가능하다!
    MoneyBox *mp1=new MoneyBox("홍길동");
    MoneyBox *mp2=new MoneyBox(c);
    fuc(b);
    delete mp1;
    delete mp2;

    return 0;
    //return 0시 d->c->b->a 순서대로 종료됨(stack영역)
}
MoneyBox fuc(MoneyBox m){
    return m;
}