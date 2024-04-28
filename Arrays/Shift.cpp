#include"Constants.h"

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

template<typename T>void ShiftRight(T c_arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	ShiftRight(c_arr[0], ROWS * COLS, number_of_shifts);
}
template<typename T>void ShiftLeft(T c_arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	ShiftLeft(c_arr[0], ROWS * COLS, number_of_shifts);
}