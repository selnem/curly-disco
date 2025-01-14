#include<iostream>
using namespace std;

class Telecom{
    private:
        int price;
        int time;
        int total;
    public:
        Telecom():total(0),price(0),time(0){};
        Telecom(int price,int time):total(0),price(price),time(time){};
        void call(int t);
        int get_total();
};
void Telecom::call(int t){
    total+=(t/time+1)*price;
}
int Telecom::get_total(){
    return total;
}


int main(){
    int N,t;
    cin>>N;
    Telecom Ys(10,30),Ms(15,60);
    for(int i=0;i<N;i++){
        cin>>t;
        Ys.call(t);
        Ms.call(t);
    }
    if(Ys.get_total()<Ms.get_total()){
        cout<<"Y "<<Ys.get_total();
    }
    else if(Ys.get_total()>Ms.get_total()){
        cout<<"M "<<Ms.get_total();
    }
    else{
        cout<<"Y M "<<Ys.get_total();
    }

    return 0;
}
