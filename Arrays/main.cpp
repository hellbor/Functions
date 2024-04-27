#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"

template<typename T>void ShiftLeft(T arr[], const int n, int number_of_shifts);
template<typename T>void ShiftRight(T arr[], const int n, int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout <<"Среднее арифметическое: " << Avg(arr, n)<<endl;
	cout << "Минимальное значение: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение: " << MaxValueIn(arr, n) << endl;
	int number_of_shifts;
	//cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	//ShiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	//ShiftRight(arr, n, number_of_shifts);
	//Print(arr, n);
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифметическое: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(d_arr, D_SIZE) << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << delimeter << endl;
	/*cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	ShiftRight(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	ShiftLeft(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);*/


	int c_arr[ROWS][COLS];
	FillRand(c_arr, ROWS,COLS);
	Print(c_arr, ROWS,COLS);
	Sort(c_arr, ROWS, COLS);
	Print(c_arr, ROWS, COLS);
	cout << delimeter << endl;
	cout << "Сумма элементов массива: " << Sum(c_arr, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(c_arr, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(c_arr, ROWS, COLS) << endl;
}

template<typename T>void Print(T c_arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << c_arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}
template<typename T>void Sort(T c_arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	int exchanges = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					iterations++;
						if (c_arr[i][j] > c_arr[k][l])
						{
							T buffer = c_arr[i][j];
							c_arr[i][j] = c_arr[k][l];
							c_arr[k][l] = buffer;
							exchanges++;
						}
				}
			}
		}
	}
	cout << "Массив отсортирован за " << iterations << " итераций\n";
	cout << "Обменов элементов: " << exchanges << endl;
	cout << delimeter << endl;
}
template<typename T>T Sum(T c_arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += c_arr[i][j];
		}
	}
	return sum;
}
template<typename T>double Avg(T c_arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return(double)Sum(c_arr, ROWS, COLS)/ROWS/COLS;
}
template<typename T>T MinValueIn(T c_arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = c_arr[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (c_arr[i][j] < min)min = c_arr[i][j];
		}
		return min;
	}
}
template<typename T>T MaxValueIn(T c_arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = c_arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (c_arr[i][j] > max)max = c_arr[i][j];
		}
	}
	return max;
}


template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr,n)/n;
}
template<typename T>T MinValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>T MaxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T>void ShiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T>void ShiftRight(T arr[], const int n, int number_of_shifts)
{
	ShiftLeft(arr, n, n - number_of_shifts);
}