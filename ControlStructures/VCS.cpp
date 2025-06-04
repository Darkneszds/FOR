#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
    int decimalNumber;
    char hexNumber[20]; // Массив для хранения шестнадцатеричного числа
    int index = 0;
    int remainder;

    setlocale(LC_ALL, "");
    cout << "Введите десятичное число: "; cin >> decimalNumber;
    char key;

    do 
    {
        remainder = decimalNumber % 16;
        if (remainder < 10) 
        {
            key = '0' + remainder;
        }
        else if (remainder == 10) 
        {
            key = 'A';
        }
        else if (remainder == 11) 
        {
            key = 'B';
        }
        else if (remainder == 12) 
        {
            key = 'C';
        }
        else if (remainder == 13) 
        {
            key = 'D';
        }
        else if (remainder == 14) 
        {
            key = 'E';
        }
        else if (remainder == 15) 
        {
            key = 'F';
        }

        hexNumber[index++] = key;
        decimalNumber /= 16;
    } while (decimalNumber > 0);

    if (index == 0) 
    {
        hexNumber[index++] = '0';
    }

    for (int i = 0; i < index / 2; ++i) 
    {
        char temp = hexNumber[i];
        hexNumber[i] = hexNumber[index - 1 - i];
        hexNumber[index - 1 - i] = temp;
    }
   
    cout << "Шестнадцатеричное представление: ";
    for (int i = 0; i < index; ++i) 
    {
        cout << hexNumber[i];
    }
    cout << endl;
    return 0;
}