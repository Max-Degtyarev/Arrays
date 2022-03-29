#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;

	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
	
			if (arr[i] = arr[j])
			{
				arr[i] = rand() % n;

			}

		}
	}


	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;

	





}