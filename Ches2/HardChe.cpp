#include <iostream>
using namespace std;
//#define INTRO

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер доски: "; cin >> n;

#ifdef INTRO
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/*if ((i + j) % 2 == 0) cout << "+ ";
			else cout << "- ";*/
			//if (i % 2 == j % 2) cout << "+ "; else cout << "- ";
			 //i % 2 == j % 2 ? cout << "+ ":  cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif INTRO



}