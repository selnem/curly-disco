#include<iostream>
#include<string>
using namespace std;
int main(){
    int n=10;
    int arr[]={1,2,5,6,7,10,11,20,30,35};
    cout<<serch(arr,10,7);
    return 0;
}

int serch(int *arr,int size,int f){
    int s=0,e=size-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==f){
            return mid;
        }
        else if(arr[mid]<f){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}

void serch2(){
    //x 가장왼쪽
    string line="aaaaabbbbbbbb!!!!!!!!!!!xxxxxxxxxx??????????????########";
    int s=0,e;
    int ans=-1;
    e=line.length()-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(line[mid]=='?'||line[mid]=='#'){
            e=mid-1;
        }
        else if(line[mid]=='a'||line[mid]=='b'||line[mid]=='!'){
            s=mid+1;
        }
        else{
            //x 찾으면 저장 앞으로 안봐도 되는 후보를 저장
            ans=mid;
            e=mid-1;
        }   
    }
    cout<<ans;
}


void serch3(){
    //x 가장왼쪽,주의 이 서칭방법은 은 가장오른쪽을 구할때 조심해야한다. 예외가 잘생김(비추천)
    string line="aaaaabbbbbbbb!!!!!!!!!!!xxxxxxxxxx??????????????########";
    int s=0,e;
    int ans=-1;
    e=line.length()-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(line[mid]=='?'||line[mid]=='#'){
            e=mid-1;
        }
        else if(line[mid]=='a'||line[mid]=='b'||line[mid]=='!'){
            s=mid+1;
        }
        else{
            //x 찾으면 저장 앞으로 안봐도 되는 후보를 저장
            e=mid;
        }   
    }
    cout<<e;  
}

int serch4(){
    //가장 왼쪽 b
    string line="aaaaaaaaaaaaaabbbbbbbbb";
    int s=0,e=line.length()-1;
    while(s+1<e){
        int mid=(s+e)/2;
        if(line[mid]=='a'){
            s=mid;
        }
        else{
            e=mid;
        }
    }
    cout<<e;
}

int lower_bound(int x,int *arr,int size){
    int answer=-1;
    int n=size;
    int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]>=x){
            answer=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return answer;
    //ans==n인경우 못찾았다.
    //arr[ans]!=x인경우 못찾았다.
}