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
    if(size==0){
        tmp->next=NULL;
        back=tmp;
    }
    else{
        tmp->next=front;
    }
    front=tmp;
    size++;
}
void DEQ::pushBack(int d){
    NODE *tmp=new NODE;
    tmp->next=NULL;
    tmp->data=d;
    if(back==NULL){
        tmp->priv=NULL;
        front=tmp;
    }
    else{
        tmp->priv=back;
    }
    back=tmp;
    size++;
}
int DEQ::popFront(){
    if(size==0){
        return -1;
    }
    int d=front->data;
    NODE *tmp=front->next;
    delete front;
    size--;
    front=tmp;

    
    return d;
}
int DEQ::popBack(){
    if(size==0){
        return -1;
    }
    int d=back->data;
    NODE *tmp=back->priv;
    delete back;
    size--;
    back=tmp;
    
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