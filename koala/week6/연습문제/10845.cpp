#include<iostream>
#include<string>
using namespace std;

struct l_list{
    l_list *node;
    int data;
};
class QUE{
    private:        
        int size;
        l_list *front;
        l_list *end;
    public:
        QUE(){
            front=end=NULL;
            size=0;
        }
        bool Empty();
        void Push(int d);
        int Pop();
        int Front();
        int Back();
        int Size();
};
bool QUE::Empty(){
    if(size==0){
        return true;
    }
    return false;
}

void QUE::Push(int d){ 
    l_list*tmp=new l_list;
    tmp->node=NULL;
    tmp->data=d;
    if(size==0){
        front=tmp;
    }
    else{
        end->node=tmp;
    }
    end=tmp;
    ++size;
}
int QUE::Pop(){
    if(size==0){
        return -1;
    }
    int d=front->data;
    l_list *tmp;
    tmp=front->node;
    delete front;
    front=tmp;
    size--;
    return d;
}

int QUE::Front(){
    if(size==0){
        return -1;
    }
    return front->data;
}
int QUE::Back(){
    if(size==0){
        return -1;
    }
    return end->data;
}
int QUE::Size(){
    return size;
}

int main(){
    string cmd;
    int n,tmp;
    cin>>n;
    QUE q;
    for(int i=0;i<n;i++){
        cin>>cmd;
        if(cmd=="push"){
            cin>>tmp;
            q.Push(tmp);
        }
        else if(cmd=="pop"){
            cout<<q.Pop()<<'\n';
        }
        else if(cmd=="size"){
            cout<<q.Size()<<'\n';
        }
        else if(cmd=="empty"){
            cout<<(int)q.Empty()<<'\n';
        }
        else if(cmd=="front"){
            cout<<q.Front()<<'\n';
        }
        else if(cmd=="back"){
            cout<<q.Back()<<'\n';
        }
        else{
            cout<<"error"<<'\n';
        }
    }
    return 0;
}