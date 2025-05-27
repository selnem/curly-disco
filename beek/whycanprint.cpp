#include<iostream>
using namespace std;

int main(){
    const char*line="Hello_world";
    printf("%s",line);
    //이거 왜 메모리 할당도 안하고 블럭도 안잡혔는데 왜 프린트됨?????
    //잘모르겠으면 gpt한테 물어봐도 ㄱㅊ
    return 0;
}