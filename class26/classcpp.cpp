#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello FOR" << endl;
	
	int n = 5;

	for (int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
}