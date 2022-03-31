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
	int a;
	int i = 0;
	for (; decimal; i++)
	{
		a = decimal % 16;
		a == 10 ? hex[i] = 65 : a == 11 ? hex[i] = 66 : a == 12 ? hex[i] = 67 : a == 13 ? hex[i] = 68 :
			a == 14 ? hex[i] = 69 : a == 15 ? hex[i] = 70 : hex[i] = (int)a + '0';
		decimal /= 16;
	}
	for (i--; i >= 0; i--)
	{
		cout << hex[i];
	}

#endif



	
	





}