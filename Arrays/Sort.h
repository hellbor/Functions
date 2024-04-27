#pragma once

#include"Constants.h"

template<typename T>void Sort(T c_arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>void Sort(T arr[], const int n);

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