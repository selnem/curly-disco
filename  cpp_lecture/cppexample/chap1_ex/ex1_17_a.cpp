#include <iostream>
using namespace std;
#include "ex1_17_myhdr.h"

int main()
{
	int ary[ArySize]={10,20,30,40,50};
	int sum;
	sum=ary_sum(ary);
	cout << "Àê?? Àê??Àê??Àê? Àê?? : " << sum << endl;
	cout << "main() ArySize : " << &ArySize << endl;
	return 0;
}
