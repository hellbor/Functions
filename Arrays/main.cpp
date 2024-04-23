#include"stdafx.h"
#include"Constants.h"

#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"

void main()
{
	setlocale(LC_ALL, "");
	const int I_SIZE = 5;
	int i_arr[I_SIZE];
	FillRand(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	Sort(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << delimiter << endl;
	cout << "Сумма элементов массива: " << Sum(i_arr, I_SIZE) << endl;
	cout <<"Среднее арифметическое: " << Avg(i_arr, I_SIZE)<<endl;
	cout << "Минимальное значение: " << MinValueIn(i_arr, I_SIZE) << endl;
	cout << "Максимальное значение: " << MaxValueIn(i_arr, I_SIZE) << endl;
	cout << delimiter << endl;
	int number_of_shifts;
	//cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	//ShiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	//ShiftRight(arr, n, number_of_shifts);
	//Print(arr, n);
	const int D_SIZE = 8;
	double d_brr[D_SIZE];
	FillRand(d_brr, D_SIZE);
	Print(d_brr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_brr, D_SIZE) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(d_brr, D_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(d_brr, D_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(d_brr, D_SIZE) << endl;
	cout << delimiter << endl;
	Sort(d_brr, D_SIZE);
	Print(d_brr, D_SIZE);

	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Среднее арифмитичесок элементов массива: " << Avg(c_arr, C_SIZE) << endl;

	cout << delimiter << endl;

	const int ROWS = 3;
	const int COLS = 4;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << delimiter << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << delimiter << endl;

	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;

	cout << delimiter << endl;
}

