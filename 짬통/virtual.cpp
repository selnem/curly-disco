#include<iostream>
using namespace std;
class P{
    private:
        int a;
        virtual void fuc() {cout<<"class P";}
};
class C:public P{
    public:
        void fuc(){cout<<"class C";}
};
int main(){
    P a;
    C b;
    P* Pp = &b;
    //Pp->fuc(); //error
    C* Cp=(C*)&a;
    Cp->fuc();
    return 0;
}