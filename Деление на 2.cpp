#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	string value = " ";
	cout << "vvedi chislo";
	cin >> a;
	value = (a % 2 == 0) ? "������� �� 2 ��� �������" : "�� ������� �� 2 ��� �������";
	cout << "value:" << value << endl;
}
