#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10; // ���-�� ��������� ������� (������ �������)
	int arr[n] = { 3, 5, 8 };
	//arr[2] = 123; // ��������� �� ������� �������� �������

	int minRand;
	int maxRand;
	cout << "������� ���������� ��������� ��������� �����: "; cin >> minRand;
	cout << "������� ����������� ��������� ��������� �����: "; cin >> maxRand;
	double b = 0;
	double c;
	/*cout << "������� �������� ������� (" << n << " ��):";*/
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
	cout << "����� ��������� �������: " << b << endl;
	cout << "������� �������������� ��������� �������: " << c;*/

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];

	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "������� ��������������: " << (double)sum / n << endl;

	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];

	}
	cout << "����������� �������� � �������: " << min << endl;
	cout << "������������ �������� � �������: " << max << endl;








}