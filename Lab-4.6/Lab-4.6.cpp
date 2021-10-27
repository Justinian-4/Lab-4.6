// Lab_04_6.cpp
// < прізвище, ім’я автора >
// Лабораторна робота No 4.6
// Цикли.
// Варіант 16
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int j, i;
	P = 1;
	i = 1;
	while (i <= 20)
	{
		S = 0;
		j = 1;
		while (j <= 40-i)
		{
			S += sqrt((abs(tan(i))));
			i++;
			j++;
		}
		P *= S / (i + j*j);
		j++;
		i++;
	}
	cout << P << endl;
	P = 1;
	i = 1;
	do
	{
		S = 0;
		j = 1;
		do
		{

			S += S += sqrt((abs(tan ( i))));
			i++;
		} while (j <= 40 - i);
		P *= S / (i + j * j);
		j++;
	} while (i <= 20);
	cout << P << endl;
	P = 1;
	for (i = 1; i <= 20; i++)
	{
		S = 0;
		for (j = 1; j <= 40-j; j++)
		{
			S += sqrt((abs(tan(i))));
		}
		P *= S / (i + j * j);
	}
	cout << P << endl;
	P = 1;
	for (i = 20; i >= 1; i--)
		

	{
		S = 0;
		for (j = i; j >= 1; j--)
			

		{
			S += sqrt((abs(tan(i))));

			

		}
		P *= S / (i + j * j);
	}
	cout << P << endl;
	return 0;
}