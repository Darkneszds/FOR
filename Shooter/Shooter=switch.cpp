#include <iostream>
#include <conio.h>
using namespace std;

#define Escape 27
#define Enter 13
#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77
#define Space 32

void main()
{
	setlocale(LC_ALL, "");
	cout << "Shoter!" << endl;
	char key;
	do
	{
		key = _getch();
		switch (key)
		{
		case ('w'):
			cout << "Вверх" << endl;
			break;
		case ('W'): 
			cout << "Вверх" << endl;
			break;
		case (UpArrow): 
			cout << "Вверх" << endl;
			break;
		case ('a'):
			cout << "Влево" << endl;
			break;
		case ('A'):
			cout << "Влево" << endl;
			break;
		case (LeftArrow):
			cout << "Влево" << endl;
			break;
		case ('d'):
			cout << "Вправо" << endl;
			break;
		case ('D'):
			cout << "Вправо" << endl;
			break;
		case (RightArrow):
			cout << "Вправо" << endl;
			break;
		case ('s'):
			cout << "Вниз" << endl;
			break;
		case ('S'):
			cout << "Вниз" << endl;
			break;
		case (DownArrow):
			cout << "Вниз" << endl;
			break;
		case (Space):
			cout << "Прыжок" << endl;
		case (Enter):
			cout << "Огонь" << endl;
			break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
}