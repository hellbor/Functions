#include<iostream>
using namespace std;

	double Factorial(int N = 1, int a);

void main()
{
	setlocale(LC_ALL, "");
	double N = 1, a;
	cout << "¬ведите число:"; cin >> a;
}
double Factorial(int N, int a)
{
	for (int i = 1; i < a; i++)
	{
		cout << i << "! = ";
		N *= i;
		cout << N << "\n";
	return N *= i;
	}
}

