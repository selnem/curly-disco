#include<iostream>
using namespace std;

struct Hnoi{
    int x,y;
};
int hanoi_cnt(int n);
void hanoi(Hnoi *arr,int n);

int main(){
    int n,cnt;
    cin>>n;
    cnt=hanoi_cnt(n);
    Hnoi* arr=new Hnoi[cnt];
    hanoi(arr,n);
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++){
        cout<<arr[i].x<<' '<<arr[i].y<<'\n';
    }
    delete[]arr;
    return 0;
    
}

int hanoi_cnt(int n){
    if(n==1){
        return 1;
    }
    else{
        return hanoi_cnt(n-1)*2+1;
    }
}

void hanoi(Hnoi *arr,int n){
    if(n==1){
        arr[0].x=1;
        arr[0].y=3;
        return;
    }
    hanoi(arr,n-1);
    int mid;
    mid=hanoi_cnt(n-1);
    for(int i=0;i<mid;i++){

        if(arr[i].x==2){
            arr[mid+1+i].x=1;
        }
        else if(arr[i].x==1){
            arr[mid+1+i].x=2;
        }
        else{
            arr[mid+1+i].x=3;
        }

        if(arr[i].y==2){
            arr[mid+1+i].y=1;
        }
        else if(arr[i].y==1){
            arr[mid+1+i].y=2;
        }
        else{
            arr[mid+1+i].y=3;
        }


        if(arr[i].x==3){
            arr[i].x=2;
        }
        else if(arr[i].x==2){
            arr[i].x=3;
        }

        if(arr[i].y==3){
            arr[i].y=2;
        }
        else if(arr[i].y==2){
            arr[i].y=3;
        }

    }
    arr[mid].x=1;
    arr[mid].y=3;
}