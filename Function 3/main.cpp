#include<iostream>
using namespace std;

double Power(double N = 1, int a, int n);

void main()
{
	setlocale(LC_ALL, "");
	int a, n;
	double N = 1;
	cout << "������� ��������� �������:"; cin >> a;
	cout << "������� ���������� �������:"; cin >> n;
}
double Power(double N = 1, int a, int n)
{
	if (n < 0)
		a = 1 / a;
		n = -n;
	return N;
}