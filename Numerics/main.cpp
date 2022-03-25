#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
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




}