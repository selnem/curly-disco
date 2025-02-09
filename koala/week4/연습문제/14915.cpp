#include<iostream>
using namespace std;
const char* map="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main(){

}
void recur(int n,int b){
    if(n==0){
        return;
    }
    recur(n/b,b);
    cout<<map[n%b];
}