#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int minRand, maxRand;
	cout << "������� ����������� ��������� �����: "; cin >> minRand;
	cout << "������� ������������ ��������� �����: "; cin >> maxRand;
	// ���������� ������� ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;

	}
	// ����� ��������� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;

	// ���������� �������

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;

			}
		}
	}

	// ����� ���������������� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;




}