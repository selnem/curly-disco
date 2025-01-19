#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct University{
    string name;
    int score;
};
bool compare(const University &p1,const University &p2);

int main(){
    University arr[3];
    arr[0].name="Soongsil";
    arr[1].name="Korea";
    arr[2].name="Hanyang";
    for(int i=0;i<3;i++){
        cin>>arr[i].score;
    }
    int sum=0;
    for(int i=0;i<3;i++){
        sum+=arr[i].score;
    }
    sort(arr,arr+3,compare);
    if(sum>=100){
        cout<<"OK";
    }
    else{
        cout<<arr[0].name;
    }
    return 0;

}
bool compare(const University &p1,const University &p2){
    return p1.score<p2.score;
}