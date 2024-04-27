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