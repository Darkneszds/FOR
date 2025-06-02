using namespace std;
#include <iostream>

void main()
{
	setlocale(LC_ALL, "");
	int number; // номер билета
	int sum_1 = 0; //сумма трёх сстрарших разрядов
	int sum_2 = 0; //Сумма трёх сарших разрядов

	cout << "Введите номер билета: "; cin >> number;
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
	cout << sum_1 << "\nсчастливый" << endl;
	cout << sum_2 << "\nне счастливый" << endl;
}