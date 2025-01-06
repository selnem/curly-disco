#include<iostream>
using namespace std;

class San{
    private:
        char *name;
        int height;
    public:
        San();
        San(const char* l,int h);
        San(const San &r);
        ~San();
        San&operator=(const San&r);
        void setName(char *l);
        const char *getName();
        void setHeight(int h);
        int getHeight();
};

San::San(){
    name=new char[2];
    strcpy(name,"\0");
    height=0;
}

San::San(const char* l,int h){
    name=new char[strlen(l)+1];
    strcpy(name,l);
    height=h;
}

San::San(const San &r){
    name=new char[strlen(r.name)+1];
    strcpy(name,r.name);
    height=r.height;
}

San::~San(){
    delete[] name;
}

San& San::operator=(const San&r){
    if(this==&r){
        return *this;
    }
    delete[] name;
    name=new char[strlen(r.name)+1];
    strcpy(name,r.name);
    height=r.height;
    return *this;
}

void San::setName(char *l){
    delete[] name;
    name=new char [strlen(l)+1];
    strcpy(name,l);
}

const char* San::getName(){
    return name;
}

void San::setHeight(int h){
    height=h;
}

int San::getHeight(){
    return height;
}

int main(){
    char str[100];
    San a("관악",629);
    San b=a;
    //San b;
    //b=a;
    cout<<b.getName()<<" : "<<b.getHeight()<<"m"<<endl;
    cout<<"새로운 산이름을 입력 하시오 : ";
    cin>>str;

    b.setName(str);
    b.setHeight(1234);
    cout<<b.getName()<<" : "<<b.getHeight()<<"m"<<endl;

    return 0;
}