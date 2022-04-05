#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "------------------\n"
//#define DETERMINANT
//#define SORT
//#define UNIQUE
//#define DUBLICATES
#define CLASS_DET


void main()
{
	setlocale(LC_ALL, "");

#ifdef DETERMINANT
	const int m = 3;
	const int n = 3;
	int determinant;
	int A[m][n] = {};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d %s", A[i][j], tab);
		}
		cout << endl;
	}
	cout << delimiter;

	// Инициализация удвоенного массива
	int B[m][n + n] = {};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n + n; j++)
		{
			if (j < 3)
			{
				B[i][j] = A[i][j];
			}
			else
			{
				B[i][j] = A[i][j - n];
			}
		}
	}
	// Вывод удвоенного массива на экран
	/*for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n + n; j++)
		{
			printf("%d %s", B[i][j], tab);
		}
		cout << endl;
	}*/

	int a = 0;
	int b = 0;
	for (int i = 0; i < m; i++)
	{
		a += B[0][i] * B[1][i + 1] * B[2][i + 2];
		b += B[0][i + 2] * B[1][i + 1] * B[2][i];
	}
	determinant = a - b;
	printf("Определитель матрицы = %d", determinant);
	cout << endl;
#endif


#ifdef SORT
	const int m = 5;
	const int n = 5;
	int A[m][n] = {};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 20;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d %s", A[i][j], tab);
		}
		cout << endl;
	}
	cout << delimiter;

	//Сортировка массива
	int buffer;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int t = j + 1;
			for (int r = i; r < m; r++)
			{
				for (; t < n; t++)
				{
					if (A[r][t] < A[i][j])
					{
						buffer = A[i][j];
						A[i][j] = A[r][t];
						A[r][t] = buffer;
					}
				}
				t = 0;
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d %s", A[i][j], tab);
		}
		cout << endl;
	}
#endif



#ifdef UNIQUE
	const int m = 4;
	const int n = 4;
	int A[m][n] = {};
	bool unique;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			do
			{
				A[i][j] = rand() % 20;
				unique = true;
				for (int r = 0; r < i; r++)
				{
					for (int t = 0; t < n; t++)
					{
						if (A[i][j] == A[r][t])
						{
							unique = false;
							break;
						}
					}
				}
				int r = i;
				for (int t = 0; t < j; t++)
				{
					if (A[i][j] == A[r][t])
					{
						unique = false;
						break;
					}
				}
			} while (unique == false);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
#endif


#ifdef DUBLICATES
	const int m = 5;
	const int n = 5;
	int A[m][n] = {};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
			printf("%d %s", A[i][j], tab);
		}
		cout << endl;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			bool already = false;
			for (int r = 0; r < i; r++)
			{
				for (int t = 0; t < n; t++)
				{
					if (A[i][j] == A[r][t])
					{
						already = true;
						break;
					}
				}
			}
			int r = i;
			for (int t = 0; t < j; t++)
			{
				if (A[i][j] == A[r][t])
				{
					already = true;
					break;
				}
			}
			if (already)continue;
			int count = 0;
			int t = j + 1;
			for (int r = i; r < m; r++)
			{
				for (; t < n; t++)
				{
					if (A[i][j] == A[r][t])
					{
						count++;
					}
				}
				t = 0;
			}
			if (count > 0)printf("Значение %d повторяется %d раз \n", A[i][j], count);
		}
	}
#endif

#ifdef CLASS_DET

	const int n = 3;
	int A[n][n] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}

	int B[n][n * 2] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = B[i][j + n] = A[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}

	//Вычисляем главную диагональ
	int main_diag = 0;
	for (int i = 0; i < n; i++)
	{
		int product = 1; // произведение элементов главной диагонали
		for (int j = 0; j < n; j++)
		{
			product *= B[j][i + j];
		}
		main_diag += product; 
	}
	cout << "Главная диагональ: " << main_diag << endl;

	//Вычисляем вспомогательную диагональ

	int aux_diag = 0; // aux - Auxillary (Вспомогательный)
	for (int i = 0; i < n; i++)
	{
		int product = 1;
		for (int j = 0; j < n; j++)
		{
			product *= B[n - 1 - j][i + j];
		}
		aux_diag += product;
	}
	cout << "Вспомогательная диагональ: " << aux_diag << endl;
	cout << "Определитель матрицы: " << main_diag - aux_diag << endl;

#endif








}