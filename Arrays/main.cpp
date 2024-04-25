#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Sort(T arr[], const int n);
template<typename T>T Sum(T arr[], const int n);
template<typename T>double Avg(T arr[], const int n);
template<typename T>T MinValueIn(T arr[], const int n);
template<typename T>T MaxValueIn(T arr[], const int n);
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
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	ShiftRight(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	ShiftLeft(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
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