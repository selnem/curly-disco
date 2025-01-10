#include<iostream>
using namespace std;
class Circle{
    private:
        double pi,Uarea,Tarea;
        int R;


    public:
        Circle(int R):pi(3.14159265359),R(R)
        {
            Uarea=pi*R*R;
            Tarea=2*R*R;
        }
        double getUarea();
        double getTarea();

};
double Circle::getUarea(){
    return Uarea;
}

double Circle::getTarea(){
    return Tarea;
}

int main(){
    int R;
    cin>>R;
    Circle C=R;
    cout<<fixed;
    cout.precision(6);
    cout<<C.getUarea()<<endl<<C.getTarea();
    return 0;

}