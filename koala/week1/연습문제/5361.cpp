#include<iostream>
using namespace std;
const double cost_arr[5]={350.34,230.90,190.55,125.30,180.90};
double total();
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        cout<<fixed;
        cout.precision(2);
        cout<<"$"<<total()<<endl;
    }
    return 0;
}
double total(){
    int temp;
    double total=0;
    for(int i=0;i<5;i++){
        cin>>temp;
        total+=temp*cost_arr[i];
    }
    return total;
}