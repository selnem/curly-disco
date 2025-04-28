#include<iostream>
#define MAX_QUE_SIZE 10
using namespace std;


template <typename T>
class arrQ{
    private:
        T *arr;
        int front;
        int rear;
        int MAX_SIZE;
    public:
        arrQ(int MAX_SIZE){
            arr=new T[MAX_SIZE];
            front=rear=-1;
            this->MAX_SIZE;
        }
        ~arrQ(){
            delete[] arr;
        }
        void enqueue(T x);
        T dequeue();
        T peak();
        bool isEmpty();
        bool isFull();
};
template <typename T> void arrQ <T> :: enqueue(T x){
    if(isFull()){
        cout<<"Q IS FULL"<<endl;
        return;
    }
    arr[++rear]=x;
}
template <typename T> bool arrQ <T> ::isFull(){
    if(rear==MAX_SIZE-1){
        return true;
    }
    return false;
}
template <typename T> bool arrQ<T>::isEmpty(){
    if(front==rear){
        return true;
    }
    return false;
}
template<typename T> T arrQ<T>::dequeue(){
    if(isEmpty()){
        cout<<"empty";
        return NULL;
    }
    return arr[++front];
}
template <typename T> T arrQ<T>::peak(){
    if(isEmpty()){
        cout<<"empty"<<endl;
        return NULL;
    }
    return arr[front+1];
}


template <typename T>
class cirQ{
    private:
        T *arr;
        int front;
        int rear;
        int MAX_SIZE;
    public:
        cirQ(int MAX_SIZE){
            arr=new T[MAX_SIZE];
            front=rear=0;
            this->MAX_SIZE=MAX_SIZE;
        }
        ~cirQ(){
            delete[] arr;
        }
        void enqueue(T e);
        T dequeue();
        T peak();
        bool isEmpty();
        bool isFull();
};
template<typename T> void cirQ<T>::enqueue(T e){
    if(isFull()){
        cout<<"isfull can't enqueue"<<endl;
        return;
    }
    rear=(rear+1)%MAX_SIZE;
    arr[rear]=e;

}
template <typename T> bool cirQ<T>::isFull(){
    if(front==(rear+1)%MAX_SIZE){
        return true;
    }
    return false;
}
template<typename T> bool cirQ<T>::isEmpty(){
    if(front==rear){
        return true;
    }
    return false;
}
template<typename T> T cirQ<T>::dequeue(){
    if(isEmpty()){
        cout<<"Q IS FULL"<<endl;
        return NULL;
    }
    front=(front+1)%MAX_SIZE;
    return arr[front];
}
template<typename T> T cirQ<T>::peak(){
    if(isEmpty()){
        cout<<"Q IS EMPTY"<<endl;
        return NULL;
    }
    return arr[(front+1)%MAX_SIZE];
}

template <typename T>
class linkQ{
    struct NODE{
        NODE* link;
        T data;
    };
    private:
        NODE* front;
        NODE* rear;
        int size;
    public:
        linkQ(){
            front=rear=NULL;
            size=0;
        }
        ~linkQ(){
            while(!isEmpty()){
                dequeue();
            }
        }
        void enqueue(T e);
        bool isEmpty();
        T peek();
        T dequeue();
        int Qsize();
};
template <typename T> bool linkQ<T>::isEmpty(){
    if(rear==NULL){
        return true;
    }
    return false;
}
template <typename T> void linkQ<T>::enqueue(T e){
    NODE* tmp=new NODE;
    tmp->link=NULL;
    tmp->data=e;
    if(isEmpty()){
        front=tmp;
    }
    else{
        rear->link=tmp;
    }
    rear=tmp;
    size++;
}
template <typename T> T linkQ<T>::dequeue(){
    if(isEmpty()){
        cout<<"empty"<<endl;
        return NULL;
    }
    size--;
    T data=front->data;
    if(front==rear){
        delete front;
        front=rear=NULL;
        return data;
    }
    NODE* tmp=front;
    front=tmp->link;
    delete tmp;
    return data;
}
template <typename T> int linkQ<T>::Qsize(){
    return size;
}
template<typename T> T linkQ<T>::peek(){
    if(isEmpty()){
        cout<<"Q IS EMPTY"<<endl;
        return NULL;
    }
    return front->data;
}
int main(){

}