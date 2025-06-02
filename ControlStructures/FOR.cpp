#include <iostream>
#include<cmath>
using namespace std;
using std::sin;
using std::cout;
using std::endl;
//#define factorial
//#define stepen
//#define ASCII
//#define fibonachi
//#define fibonachi2
//#define predel
//#define Simple_number
//#define Pifagor
//void main()
//{
//	setlocale(LC_ALL, "");
//#ifdef factorial
//	int n;
//	double f = 1;
//	std::cout << "Введите число: "; std::cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		std::cout << i << "! = ";
//		f *= i;
//		std::cout << f << "\n";
//	}
//	std::cout << endl;
//	//По задумке он должен был выводить пример, но я туплю
//#endif // factorial
//#ifdef stepen
//	double a, b, result;
//
//	std::cout << "Введите основное число: "; std::cin >> a;
//	std::cout << "Введите показатель степени: "; std::cin >> b;
//	result = pow(a, b);
//	std::cout << a << " в степени " << b << " ровняется: " << result << endl;
//
//	double a; // основание 
//	int n; //показатель степени
//
//	cout << "Введите основание степени: "; cin >> a;
//	cout << "Введите покзатель степени: "; cin >> n;
//	double N = 1;
//	if (n < 0)
//	{
//		a = 1 / a;
//		n = -n;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		N *= a;
//	}
//	cout << N << endl;
//	main();
//
//#endif // stepen
//#ifdef ASCII
//	std::cout << "0-Null 1-Start of Heading 2-Start of Text 3-End of Text 4-End of Transmit 5-Enquiry 6-Acknowledge 7-Bell 8-Backspace 9-Horizontal Tab 10-Line Feed 11-Vertical Tab 12-Form Feed 13-Carriage Return 14-Shift Out 15-Shift In 16-Data Link Escape\n";
//	std::cout << "17-Device Control 1 18-Device Control 2 19-Device Control 3 20-Device Control 4 21-Negative ACK 22-Synchronous Idle 23-End of Trans Block 24-Cancel 25-End of Medium 26-Substitute 27-Escape 28-File Separator 29-Group Separator 30-Record Separator 31-Unit Separator 32-Space\n";
//	std::cout << "33-Exclamation Mark 34-Double Quote 35-Number Sign 36-Dollar Sign 37-Percent Sign 38-Ampersand 39-Single Quote 40-Left Parenthesis 41-Right Parenthesis 42-Asterisk 43-Plus Sign 44-Comma 45-Hyphen 46-Period 47-Slash 48-Digit Zero\n";
//	std::cout << "49-Digit One 50-Digit Two 51-Digit Three 52-Digit Four 53-Digit Five 54-Digit Six 55-Digit Seven 56-Digit Eight 57-Digit Nine 58-Colon 59-Semicolon 60-Less Than 61-Equals Sign 62-Greater Than 63-Question Mark 64-At Sign 65-Uppercase A\n";
//	std::cout << "66-Uppercase B 67-Uppercase C 68-Uppercase D 69-Uppercase E 70-Uppercase F 71-Uppercase G 72-Uppercase H 73-Uppercase I 74-Uppercase J 75-Uppercase K 76-Uppercase L 77-Uppercase M 78-Uppercase N 79-Uppercase O 80-Uppercase P 81-Uppercase Q\n";
//	std::cout << "82-Uppercase R 83-Uppercase S 84-Uppercase T 85-Uppercase U 86-Uppercase V 87-Uppercase W 88-Uppercase X 89-Uppercase Y 90-Uppercase Z 91-Left Bracket 92-Backslash 93-Right Bracket 94-Caret 95-Underscore 96-Grave Accent 97-Lowercase a\n";
//	std::cout << "98-Lowercase b 99-Lowercase c 100-Lowercase d 101-Lowercase e 102-Lowercase f 103-Lowercase g 104-Lowercase h 105-Lowercase i 106-Lowercase j 107-Lowercase k 108-Lowercase l 109-Lowercase m 110-Lowercase n 111-Lowercase o 112-Lowercase p 113-Lowercase q\n";
//	std::cout << "114-Lowercase r 115-Lowercase s 116-Lowercase t 117-Lowercase u 118-Lowercase v 119-Lowercase w 120-Lowercase x 121-Lowercase y 122-Lowercase z 123-Left Brace 124-Vertical Bar 125-Right Brace 126-Tilde 127-Delete";
//
//
//	for (int i = 0; i < 256; i++)
//	{
//		if (i % 16 == 0)cout << endl;
//		cout << (char)i << " ";
//	}
//#endif // ASCII
//#ifdef fibonachi
//	/*double limit;
//	double a = 0;
//	double b = 1;
//	double other_number;
//	std::cout << "Введите предел для Фибоначчи: "; std::cin >> limit;
//	std::cout << "Ряд Фибоначчи будет выведен до: " << limit << endl;
//
//	if (a <= limit)
//	{
//		std::cout << a << " ";
//	}
//	if (b <= limit)
//	{
//		std::cout << b << " ";
//	}
//
//	while (true)
//	{
//		double other_number = a + b;
//		if (other_number > limit) break;
//		{
//			std::cout << other_number << " " << endl;
//			a = b;
//			b = other_number;
//		}
//	}*/
//
//	int n;
//	cout << "Введите предел для ряда фибоначи: "; cin >> n;
//	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
//		cout << a << "\t";
//#endif // fibonachi
//#ifdef fibonachi2
//	/*int n;
//	double a = 0;
//	double b = 1;
//	std::cout << "Введите количество чисел которое будет выведено в ряду Фибоначчи: "; std::cin >> n;
//	std::cout << n << "чисел будет выведено" << endl;
//	if (n >= 1) std::cout << a << " ";
//	if (n >= 2) std::cout << b << " ";
//	for (int i = 3; i <= n; ++i)
//	{
//		double next = a + b;
//		std::cout << next << " ";
//		a = b;
//		b = next;*/
//
//	int n;
//	cout << "Введите количетсво чисел из ряда фибоначи: "; cin >> n;
//	for (long long int i = 0, a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
//		cout << a << "\t";
//
//
//#endif // fibonachi2
//#ifdef predel 
//	int n;
//	cout << "Введите предельное число: "; cin >> n;
//	for (int i = 0; i <= n; i++)
//	{
//		bool simple = true; //предположим, что число простое, но это нужно проверить;
//		for (int j = 2; j <= sqrt(i); j++)//sqrt(n) возвращет квадратный корень числа 'n'
//		{
//			if (i % j == 0)
//			{
//				simple = false;
//				break;
//			}
//		}
//		if(simple)cout << i << "\t";
//	}
//	cout << endl;
//
//	#endif
//#ifdef Simple_number
//	int n; 
//	cout << "Введите предельное число: ";  cin >> n;
//	for (int i = 0; i <= n; i++)
//	{
//		int sum = 0;
//		for (int j = 1; j <= i/2; j++)
//		{
//			if (i % j == 0)
//			{
//			sum += j;
//			}
//		}
//		if (i == sum)cout << i << "\t";
//	}
//
//#endif //
//#ifdef Pifagor
//	for (int i = 1; i <= 10; i++)
//	{
//		for (int j = 1; j <= 10; j++)
//		{
//			cout << i * j << "\t";
//		}
//		cout << endl;
//	}
//#endif // Perfect_number
//
//}