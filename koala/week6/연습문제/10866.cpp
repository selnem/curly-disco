#include<iostream>
#include<string>
using namespace std;

struct NODE{
    NODE *next;
    NODE *priv;
    int data;
};
class DEQ{
    private:
        NODE *front;
        NODE *back;
        int size;
    public:
        DEQ(){
            front=back=NULL;
            size=0;
        }
        ~DEQ(){
            
        }
        void pushFront(int d);
        void pushBack(int d);
        int popFront();
        int popBack();
        int Size();
        bool Empty();
        int Front();
        int Back();
};
void DEQ::pushFront(int d){
    NODE *tmp=new NODE;
    tmp->priv=NULL;
    tmp->data=d;
    if(size==0){//만약 빈 공간이라면 덱 맨앞 맨뒤 둘다 새로운 노드
        tmp->next=NULL;
        back=tmp;
    }
    else{//새로운 노드의 앞을 가장 앞과 연결
        tmp->next=front;
        front->priv=tmp;
    }
    front=tmp;//가장 앞부분 노드 포인터 교체
    size++;
}
void DEQ::pushBack(int d){
    NODE *tmp=new NODE;
    tmp->next=NULL;
    tmp->data=d;
    if(size==0){//만약 빈 공간이라면 덱 맨앞 맨뒤 둘다 새로운 노드
        tmp->priv=NULL;
        front=tmp;
    }
    else{//새로운 노드에 덱의 가장 뒷부분을 연결
        tmp->priv=back;
        back->next=tmp;
    }
    back=tmp; //가장 뒷부분 노드 포인터 교체
    size++;
}
int DEQ::popFront(){
    if(size==0){ //만약 덱 원소 없다면 -1 반환
        return -1;
    }
    int d=front->data;// 가장 앞 데이터 추출
    NODE *tmp=front->next;// 가장 앞 노드의 다음 노드를 저장
    if(tmp==NULL){
        back=NULL;
    }
    delete front;//가장 앞 노드 삭제
    size--;
    front=tmp;//가장 앞 노드 교체

    return d;
}
int DEQ::popBack(){
    if(size==0){
        return -1;
    }
    int d=back->data;// 가장 뒷노드의 데이터 추출
    NODE *tmp=back->priv;// 가장 뒷노드의 뒤의 노드 위치 저장
    if(tmp==NULL){
        front=NULL;
    }
    delete back;// 가장 뒷 노드 삭제
    size--;
    back=tmp; //가장 뒷 노드 교체
    
    return d; 
}
int DEQ::Size(){
    return size;
}
bool DEQ::Empty(){
    if(size==0){
        return true;
    }
    return false;
}
int DEQ::Front(){
    if(size==0){
        return -1;
    }
    return front->data;
}
int DEQ::Back(){
    if(size==0){
        return -1;
    }
    return back->data;
}

int main(){
    string cmd;
    int t,d;
    DEQ dq;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>cmd;
        if(cmd=="push_front"){
            cin>>d;
            dq.pushFront(d);
        }
        else if(cmd=="push_back"){
            cin>>d;
            dq.pushBack(d);
        }
        else if(cmd=="pop_front"){
            cout<<dq.popFront()<<'\n';
        }
        else if(cmd=="pop_back"){
            cout<<dq.popBack()<<'\n';
        }
        else if(cmd=="size"){
            cout<<dq.Size()<<'\n';
        }
        else if(cmd=="empty"){
            cout<<(int)dq.Empty()<<'\n';
        }
        else if(cmd=="front"){
            cout<<dq.Front()<<'\n';
        }
        else if(cmd=="back"){
            cout<<dq.Back()<<'\n';
        }
        else{
            cout<<"error"<<'\n';
        }
    }
    return 0;
}