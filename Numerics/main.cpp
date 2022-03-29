#include<iostream>
#include<conio.h>
using namespace std;

//#define CLASSWORK
//#define OCT
#define HEX

void main()
{
	setlocale(LC_ALL, "");
#ifdef CLASSWORK
	int decimal;
	const int SIZE = 32;
	bool bin[SIZE] = {};
	//int n = 0;
	cout << "Введите десятичное число: "; cin >> decimal;
	/*for (int i = 0; decimal > 0; i++)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		n++;
	}

	for (int i = n - 1; i >= 0; i--)
	{

		cout << bin[i];

	}*/

	int i = 0;


	/*for (; decimal > 0; i++)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		//n++;
	}

	for (i--; i >= 0; i--)
	{

		cout << bin[i];

	}*/



	for (; decimal; i++, decimal /= 2)
	{
		bin[i] = decimal % 2;
		;
		//n++;
	}

	for (i--; i >= 0; i--)
	{

		cout << bin[i];

	}

#endif

#ifdef OCT

	int decimal;
	const int n = 11;
	int oct[n] = {};
	cout << "Введите десятичное число: "; cin >> decimal;
	int i = 0;
	for (; decimal > 0; i++)
	{
		oct[i] = decimal % 8;
		decimal /= 8;

	}
	for (i--; i >= 0; i--)
	{
		cout << oct[i];
	}

#endif

#ifdef HEX
	int decimal;
	const int n = 8;
	char hex[n] = {};
	cout << "Введите десятичное число: "; cin >> decimal;
	cout << decimal << endl;;
	int a;
	int i = 0;
	for (; decimal; i++)
	{
		a = decimal % 16;
		if (a == 10)hex[i] = 65;
		else if (a == 11)hex[i] = 66;
		else if (a == 12)hex[i] = 67;
		else if (a == 13)hex[i] = 68;
		else if (a == 14)hex[i] = 69;
		else if (a == 15)hex[i] = 70;
		else
		{
			a = a + '0';
			hex[i] = (int)a;
		}
		decimal /= 16;
	}
	for (i--; i >= 0; i--)
	{
		cout << hex[i];
	}

#endif



	
	/*long long a;
	long long b = 0;
	cout << "Введите число: "; cin >> a;
	for (; a > 0;)
	{
		
		b = a % 16;
		a /= 16;
		cout << b << "\t" << a << endl;
				
	}*/






}