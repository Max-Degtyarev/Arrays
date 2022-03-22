#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5; // кол-во элементов массива (размер массива)
	int arr[n] = { 3, 5, 8 };
	//arr[2] = 123; // Обращение ко второму элементу массива
	double b = 0;
	double c;
	cout << "Введите элементы массива (" << n << " шт):";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		b = b + arr[i];

	}
	c = b / n;
	cout << "Сумма элементов массива: " << b << endl;
	cout << "Среднее арифметическое элементов массива: " << c;


}