#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int size;
	cout << "Введите размер доски: "; cin >> size;
	int counter = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			counter % 2 != 0 ? cout << "+ " : cout << "- ";
			counter++;
		}
		cout << endl;
	}
}