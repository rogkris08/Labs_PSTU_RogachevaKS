#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	int n = 2; // при n = 1 происходит деление на 0
	double a;
	double summ = 0.0;
	double const eps = 1e-4;

	a = 2 / ((2 - 1) * (2 - 1));
	cout << "Считаем а для n = 2: " << a <<endl;

	while (a >= eps)
	{
		summ += a;
		a = a * (n + 1) * (n - 1) * (n - 1) / pow(n, 3);
		
		n++;
	}

	cout << "Вывод суммы членов ряда: " << summ << endl;

	return 0;
}
