#include<iostream>
#include<algorithm>
using namespace std;

typedef struct T{
    int hour,min;
    double angle;
}T;

T *T_input(int n);
void T_angle(T *arr,int size);
bool compare(const T&a,const T&b);


int main(){
    int n,size=5;
    cin>>n;
    for(int i=0;i<n;i++){
        T*arr=T_input(size);
        T_angle(arr,size);
        sort(arr,arr+size,compare);
        printf("%02d:%02d\n",arr[size/2].hour,arr[size/2].min);
        delete[]arr;
    }
    return 0;
}


T *T_input(int n){
    T* arr=new T[n];
    for(int i=0;i<n;i++){
        scanf("%d:%d",&arr[i].hour,&arr[i].min);
    }
    return arr;
}

void T_angle(T *arr,int size){
    double h_ang,m_ang,temp;
    for(int i=0;i<size;i++){
        m_ang=arr[i].min*6;
        h_ang=arr[i].min*0.5;
        if(arr[i].hour>=12){
            h_ang+=(arr[i].hour-12)*30;
        }
        else{
            h_ang+=(arr[i].hour)*30;
        }
        temp=abs(h_ang-m_ang);
        if(temp>180){
            temp=360-temp;
        }
        arr[i].angle=temp;
    }
    
}

bool compare(const T&a,const T&b){
    if(a.angle==b.angle){
        if(a.hour==b.hour){
            return a.min<b.min;
        }
        return a.hour<b.hour;
    }
    return a.angle<b.angle;
}
