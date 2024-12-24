#include<iostream>
using namespace std;
class BaseException
{
public:
	void ShowExceptionMessage()
	{
		cout << "BaseException exception\n";
	}
};
class DerivedException : public BaseException
{
public:
	void ShowExceptionMessage()
	{
		cout << "DerivedException exception\n";
	}
};
class Theater
{
public:
	void BuyTicket(int age)
	{
		if (age > 18)
			cout << "관람가능합니다.\n";
		else
			throw DerivedException();
		cout << "결제에 성공했습니다.\n";
	}
};
int main()
{
	int age;
	cout << "나이를 입력하세요.";
	cin >> age;
	Theater t;
	try
	{
		t.BuyTicket(age);
	}

	/* catch(BaseException ex) //잘못된 동작
	{
	ex.ShowExceptionMessage();
	}
	catch(DerivedException ex)
	{
	ex.ShowExceptionMessage();
	} */
	catch (DerivedException ex)
	{
		ex.ShowExceptionMessage();
	}
	catch (BaseException ex)
	{
		ex.ShowExceptionMessage();
	}
	return 0;
}
