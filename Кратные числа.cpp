#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	char n;
	cout << " vvedi chislo ";
	cin >> a;
	if (a == 0)
	{
		n = 'z';
	}
	else if (a % 3 == 0)
	{
		n = 'a';
	}
	else if (a % 4 == 0)
	{
		n = 'b';
	}
	else if (a % 5 == 0)
	{
		n = 'c';
	}
	switch (n)
	{
	case 'z':
		cout << "����� ����" << endl;
		break;
	case 'a':
		cout << " ������ 3" << endl;
		break;
	case 'b':
		cout << "������ 4" << endl;
		break;
	case 'c':
		cout << " a + 7 " << endl;
		break;
	default:
		cout << " ������ " << endl;
		break;

	}
}