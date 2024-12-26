#include <iostream>
using namespace std;
#include <string.h> 

class CException // 예외처리 클래스
{
private:
	char * excepFileName;
	int line;
public:
	CException(const char * s, int l)
	{
		excepFileName = new char[strlen(s) + 1];
		strcpy(excepFileName, s);
		line = l;
	}
	CException(const CException &r)
	{
		excepFileName = new char[strlen(r.excepFileName) + 1];
		strcpy(excepFileName, r.excepFileName);
		line = r.line;
	}
	~CException()
	{
		delete[] excepFileName;
	}
	char * getName()
	{
		return excepFileName;
	}
	int getLine()
	{
		return line;
	}
};
int mod(int x, int y);
int  main()
{
	int a, b, res;
	cout << "두 정수 입력 : ";
	cin >> a >> b;
	try
	{
		res = mod(a, b);

		cout << "This will be never printed" << endl;
	}
	catch (CException & e)
	{
		cout << "Excepton " << e.getName() << " at line "
			<< e.getLine() << endl;
		exit(1);
	}
	cout << a << "를 " << b << "로 나눈 몫 : " << res << endl;
	return 0;
}
int mod(int x, int y)
{
	if (y == 0)
	{
		// 예외처리 오브젝트 생성
		throw CException("testMain.cpp파일", __LINE__);
	}
	return x / y;
}
