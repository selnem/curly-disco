#include <iostream>
using namespace std;

void square(int);  // unsigned int형이나 long형이면 에러
void square(double);
//int double 타입은 대표자료형
//char short 같은 더 작은 자료형의 대표 int로 자동형변환 float도 dobule로 자동형변환이 된다.

/*
//오류 발생이유 자료형크기가 더작아서 오버플로
void square(short);  // unsigned int형이나 long형이면 에러
void square(float);
*/
int main()
{
	char ch='A';
	short sh=10;
	float ft=3.4f;
	double db=3.4;

	square(ch);  // square(int) 호출 암시적 형변환
	square(sh);  // square(int) 호출
	square(ft);  // square(double) 호출
	square(db);  // square(double) 호출

	return 0;
}

void square(int a)
{
	cout << "int형으로 호출 : " << a*a << endl;
}

void square(double a)
{
	cout << "double형으로 호출 : " << a*a << endl;
}
/*
void square(short a)
{
	cout << "int형으로 호출 : " << a << endl;
}

void square(float a)
{
	cout << "double형으로 호출 : " << a << endl;
}
*/