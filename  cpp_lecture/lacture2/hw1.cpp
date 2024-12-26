#include<iostream>
using namespace std;

int sumfuc(int *arr,int n=3);
void printbar(int n);
void printspace(int n);

int main(){
    char name[20];
    int score[3];
    int sum;
    double avg;
    cout<<"이름:";
    cin>>name;
    cout<<"세 과목의 점수:";
    for(int i=0;i<3;i++){
        cin>>score[i];
    }
    sum=sumfuc(score);
    avg=sum/3;
    printspace(21);
    printbar(5);
    cout<<"< 성적표 >";
   
    
}
int sumfuc(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
void printbar(int n){
    for(int i=0;i<n;i++){
        cout<<'=';
    }
}
void printspace(int n){
    for(int i=0;i<n;i++){
        cout<<' ';
    }
}