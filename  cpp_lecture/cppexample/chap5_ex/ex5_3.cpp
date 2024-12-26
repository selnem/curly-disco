#include <iostream>
using namespace std;
#include "ex5_3_temp.h"
int main()
{
	//°¶ »£√‚
	const char * id = "foo";
	const char * passwd = "1234567";
	Pair<double, double> mydata1(3.1456, 1.73205);
	Pair<int, const char *> mydata2(127, passwd);
	Pair<const char *, const char *> mydata3(id, passwd);
	mydata1.Show();
	mydata2.Show();
	mydata3.Show();

	return 0;
}
