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
			cout << "���������մϴ�.\n";
		else
			throw DerivedException();
		cout << "������ �����߽��ϴ�.\n";
	}
};
int main()
{
	int age;
	cout << "���̸� �Է��ϼ���.";
	cin >> age;
	Theater t;
	try
	{
		t.BuyTicket(age);
	}

	/* catch(BaseException ex) //�߸��� ����
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
