#include<iostream>
using namespace std;

#define tab "\t"
//#define UNIQUE
//#define DUPLICATE_1
//#define DUPLICATE_2



void main()
{
	setlocale(LC_ALL, "");
#ifdef UNIQUE
	const int n = 10;
	int arr[n] = {};
	int buffer;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				arr[i] = rand() % n;
				j = -1;
			}
		}
	}
	// Вывод случайного массива с уникальными значениями
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << endl;
	// Сортировка элементов массива по возростанию
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	// Вывод отсортированного массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
#endif

#ifdef DUPLICATE_1
	const int n = 10;
	int arr1[n] = {};
	int arr2[n] = {};
	int a = 0;
	int b = -1;
	for (int i = 0; i < n; i++)
	{
		arr1[i] = rand() % n;
		cout << arr1[i] << tab;
	}
	cout << endl << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr1[i] == arr1[j])
			{
				b++;
				arr2[b] = arr1[i];
				a += 1;
			}
		}
	}
	cout << "Повторяющиеся значения: ";
	for (int i = 0; i < a; i++)
	{
		cout << arr2[i] << tab;
	}
	cout << endl;
	cout << "Количество повторений: " << a;
	cout << endl;
#endif

#ifdef DUPLICATE_2
	const int n = 20;
	int arr[n] = {};
	int c, d;
	int z = -1;
	int o = 0;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		cout << arr[i] << "  ";
	}
	cout << endl;
	cout << "Повторяющиеся" << "\t" << "Количество" << endl;
	cout << "значения" << "\t" << "повторений" << endl;
	for (int i = 0; i < n; i++)
	{
		int a = 0; int b = 0; int q = 0;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] != arr[j])
			{
				b += 1;
			}
		}
		if (b == i)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j])
				{
					a += 1;
					for (int r = j; r > i; r--)
					{
						if (arr[r] != arr[i])
						{
							q += 1;
						}
						if (q == (arr[j] - arr[i]))
						{
							cout << arr[i];
							z++;
						}
					}
				}
			}
		}
		if (z == o)
		{
			cout << "\t\t" << a << endl;
			o++;
		}
	}
#endif


	const int n = 10;
	int arr[n] = {};
	bool unique;
#ifdef UNIQUE_1
	for (int i = 0; i < n; i++)
	{
		do
		{
			arr[i] = rand() % n;
			unique = true; //предполагаем что сгенерированное случайное число уникально
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break; // прерывает текующую итерацию и все последующие
				}
			}
		} while (!unique);

	}
#endif

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}


	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;






}