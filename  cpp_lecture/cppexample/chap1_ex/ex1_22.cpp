#include <iostream>
using namespace std;
struct Score{
	int kor, eng, mat;
	double avg;
};

void input(Score &r);
Score &average(Score &r);
int main()
{
	Score s;
	input(s);
	cout << "��� ���� : ";
	cout << average(s).avg << endl;  // s.avg�� ����.
		return 0;
}
void input(Score &r)
{
	cout << "�� ������ ���� �Է� : ";
	cin >> r.kor >> r.eng >> r.mat;
}
Score &average(Score &r)
{
	int tot;
	tot=r.kor+r.eng+r.mat;
	r.avg=tot/3.0;

	return r;
}
