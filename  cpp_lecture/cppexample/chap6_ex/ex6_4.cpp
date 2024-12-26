#include <iostream>
using namespace std;
#include <string.h> 

class CException // ����ó�� Ŭ����
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
	cout << "�� ���� �Է� : ";
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
	cout << a << "�� " << b << "�� ���� �� : " << res << endl;
	return 0;
}
int mod(int x, int y)
{
	if (y == 0)
	{
		// ����ó�� ������Ʈ ����
		throw CException("testMain.cpp����", __LINE__);
	}
	return x / y;
}
