#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number; //число пользовател€
	int reverse = 0; //исходное число записанное наоборот
	cout << "¬ведите число: "; cin >> number;
	int buffer = number; // создание копии исходного числа
	while (buffer)
	{
		reverse *= 10; //освобождаем место под следующей разр€д
		reverse += buffer % 10; //добавл€ем младший разр€д к обратной записи числа
		buffer /= 10; //убираем младший разр€д из пр€мой записи числа
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "ѕалиндром" << endl;
	}
	else
	{
		cout << "Ќе палиндром" << endl;
	}
}