using namespace std;
#include <iostream>

void main()
{
	setlocale(LC_ALL, "");
	int number; // ����� ������
	int sum_1 = 0; //����� ��� ��������� ��������
	int sum_2 = 0; //����� ��� ������ ��������

	cout << "������� ����� ������: "; cin >> number;
	while (number > 10000)
	{
		sum_1 += number % 10;
		number /= 10;
	}
	while (number)
	{
		sum_2 += number % 10;
		number /= 10;
	}
	cout << sum_1 << "\n����������" << endl;
	cout << sum_2 << "\n�� ����������" << endl;
}