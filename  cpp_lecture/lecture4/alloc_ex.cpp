#include<iostream>
int main(){
    int**arr=new int* [2];
    for(int i=0;i<3;i++){
        arr[i]=new int[5];
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=10*(i+1)+j+1;
            std::cout<<arr[i][j]<<' ';
        }
        std::cout<<std::endl;
    }
    for(int i=0;i<2;i++){
        delete[] arr[i];
    }
    delete[] arr;//주의 할당해제시 free로 하지 말것 new[](new array)로화면 delete[]로 할것!
    return 0;
}