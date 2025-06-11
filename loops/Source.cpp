#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8 };
	
	//arr[2] = 1024; //обращение к элементу
	//cout << arr[2] << endl;

	//ввод элементов массива с клавиатуры
	//cout << "Введите элементы массива: "; 

	for (int i = 0; i < SIZE; i++)
	{
		//cin >> arr[i];
		arr[i] = rand() % 100;
	}
	//вывод массива на экран
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//вывод массива на экран в обратном порядке
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	
	//среднее значение массива
	cout << "Среднее-аарифметическое значение массива: " << (double)sum / SIZE << endl;

	//найти минимальное значение массива
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимально значение: " << min << endl;
	cout << "Максимальное значение: " << max << endl;

	//найти максимальное значение массива



}