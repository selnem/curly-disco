#include<iostream>
using namespace std;
#include <new>

int main(){
	int *ip;
	int num=0;
	try{
		while(1){
			ip=new int[1000000];
			++num;
			cout << num << "��° �Ҵ� ����" << endl;
		}
	}
	//catch(bad_alloc &ex){
	//	cout << ex.what() << endl;
	//	cout << "�Ҵ�Ұ�" << endl;
	//}
	catch(exception &ex){
		cout << ex.what() << endl;
		cout << "�Ҵ�Ұ�" << endl;
	}
		
	return 0;
}
