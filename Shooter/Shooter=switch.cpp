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
			cout << "�����" << endl;
			break;
		case ('W'): 
			cout << "�����" << endl;
			break;
		case (UpArrow): 
			cout << "�����" << endl;
			break;
		case ('a'):
			cout << "�����" << endl;
			break;
		case ('A'):
			cout << "�����" << endl;
			break;
		case (LeftArrow):
			cout << "�����" << endl;
			break;
		case ('d'):
			cout << "������" << endl;
			break;
		case ('D'):
			cout << "������" << endl;
			break;
		case (RightArrow):
			cout << "������" << endl;
			break;
		case ('s'):
			cout << "����" << endl;
			break;
		case ('S'):
			cout << "����" << endl;
			break;
		case (DownArrow):
			cout << "����" << endl;
			break;
		case (Space):
			cout << "������" << endl;
		case (Enter):
			cout << "�����" << endl;
			break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
}