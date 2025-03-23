#include<iostream>
#include<array>

using namespace std;

int main(){
    array <int, 5> arr={1,2,3,4,5};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;

    cout<<arr.size()<<endl;

    for(auto &iter : arr){
        cout<<iter<<' ';
    }
    cout<<endl;

    return 0;
}