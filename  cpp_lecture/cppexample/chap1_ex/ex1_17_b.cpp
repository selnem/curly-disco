#include "ex1_17_myhdr.h"
#include<iostream>
using namespace std;

int ary_sum(const int *ap)
{
	int i, sum=0;
	for(i=0; i<ArySize; i++){
		sum+=ap[i];
	}
	cout << "ary_sum()�� ArySize�� �ּ� : " << &ArySize << endl;
	return sum;
}
