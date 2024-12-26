#include <iostream>
using namespace std;
void prn(const char *);
void prn(const char *, int);//warning if using defalt ex int=4 error at prn(str) prn(cstr)
void prn(char, int);
//void prn(char*);
//함수 오버로딩은 컴파일러가 prn_constcharp_int 이런느낌으로 스스로 변환하여 다른함수로 만들어준다.

int main()
{
	char str[10]="Star";
	const char *Cstr="const";
	prn(str);  // prn(char *) 
	prn(Cstr);//prn (const char* )
	prn("Moon");  // prn(const char *) 
	prn("Gogumi", 3);  // prn(char *, int) 
	prn('#', 7);  // prn(char, int) 
	prn("#",7);//prn(const char*, int)
	
	return 0;
}

void prn(const char *p)
{
	cout << p << endl;
}

void prn(const char *p, int rc)
{
	int i;
	for(i=0; i<rc; i++){
		cout << p << endl;
	}
}

void prn(char ch, int rc)
{
	int i;
	for(i=0; i<rc; i++){
		cout << ch;
	}
	cout << endl;
}

void prn(char* p)
{
	cout << "4 prn() : " << p << "\n";
}