#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10; // кол-во элементов массива (размер массива)
	int arr[n] = { 3, 5, 8 };
	//arr[2] = 123; // Обращение ко второму элементу массива

	int minRand;
	int maxRand;
	cout << "Введите минимально возможное случайное число: "; cin >> minRand;
	cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
	double b = 0;
	double c;
	/*cout << "Введите элементы массива (" << n << " шт):";*/
	for (int i = 0; i < n; i++)
	{
		/*cin >> arr[i];*/
		//arr[i] = rand() % 50 + 50;
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	/*for (int i = 0; i < n; i++)
	{
		b = b + arr[i];

	}
	c = b / n;
	cout << "Сумма элементов массива: " << b << endl;
	cout << "Среднее арифметическое элементов массива: " << c;*/

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];

	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее арифметическое: " << (double)sum / n << endl;

	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];

	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;








}