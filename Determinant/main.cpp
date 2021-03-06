#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "------------------\n"
//#define DETERMINANT
//#define SORT
//#define UNIQUE
//#define DUBLICATES
//#define CLASS_DET
#define INVERSE


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

	// ????????????? ?????????? ???????
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
	// ????? ?????????? ??????? ?? ?????
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
	printf("???????????? ??????? = %d", determinant);
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

	//?????????? ???????
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
			if (count > 0)printf("???????? %d ??????????? %d ??? \n", A[i][j], count);
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

	//????????? ??????? ?????????
	int main_diag = 0;
	for (int i = 0; i < n; i++)
	{
		int product = 1; // ???????????? ????????? ??????? ?????????
		for (int j = 0; j < n; j++)
		{
			product *= B[j][i + j];
		}
		main_diag += product; 
	}
	cout << "??????? ?????????: " << main_diag << endl;

	//????????? ??????????????? ?????????

	int aux_diag = 0; // aux - Auxillary (???????????????)
	for (int i = 0; i < n; i++)
	{
		int product = 1;
		for (int j = 0; j < n; j++)
		{
			product *= B[n - 1 - j][i + j];
		}
		aux_diag += product;
	}
	cout << "??????????????? ?????????: " << aux_diag << endl;
	cout << "???????????? ???????: " << main_diag - aux_diag << endl;

#endif



#ifdef INVERSE
	const int m = 3;
	const int n = 3;
	printf("???????? ??????? \n");
	int A[m][n] = {};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand()%7;
			printf("%d %s", A[i][j], tab);
 		}
		cout << endl;
	}
	cout << delimiter;

	// ??????? ??????????? ???????
	int B[m][n * 2] = {};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = B[i][j + n] = A[i][j];
		}
	}

	// ????????? ???????????? ???????
	int a = 0;
	int b = 0;
	int d;
	for (int i = 0; i < n; i++)
	{
		a += B[0][i] * B[1][i + 1] * B[2][i + 2];
		b += B[0][i + 2] * B[1][i + 1] * B[2][i];
	}
	d = a - b;
	printf("???????????? ??????? = %d \n", d);
	cout << endl;

	//??????? ??????? ???????
	int C[m][n] = {};
	int q = 1;
	int s = 2;
	for (int i = 0; i < m; i++)
	{
		int z = 1;
		int r = 2;
		for (int j = 0; j < n; j++)
		{
			C[i][j] = A[q][z] * A[s][r] - A[s][z] * A[q][r];
			if (j == 1)r = 1;
			z = 0;
		}
		if (i == 0)q = 0;
		if (i == 1)s = 1;
	}
	cout << "??????? ???????" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << C[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter;

	//??????? ??????? ?????????????? ??????????
	int D[m][n] = {};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			D[i][j] = C[i][j];
		}
	}
	D[0][1] = D[0][1] - D[0][1] * 2;
	D[1][0] = D[1][0] - D[1][0] * 2;
	D[1][2] = D[1][2] - D[1][2] * 2;
	D[2][1] = D[2][1] - D[2][1] * 2;
	cout << "??????? ?????????????? ??????????" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << D[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter;

	//????????????????? ??????? ?????????????? ??????????
	int E[m][n] = {};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			E[i][j] = D[j][i];
		}
	}
	cout << "????????????????? ??????? ?????????????? ??????????" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << E[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter;

	//???????? ???????

	double f = 1 / (double)d;
	cout << "???????? ???????" << endl;
	double F[m][n] = {};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			F[i][j] = f * E[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << F[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter;

	//????????

	double G[m][n] = {};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				G[i][j] += A[i][k] * F[k][j];
			}
		}
	}
	cout << "????????" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << G[i][j] << tab;
		}
		cout << endl;
	}










#endif








} 