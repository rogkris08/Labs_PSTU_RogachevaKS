#include <iostream>
#include <windows.h>
using namespace std;

//нахождение суммы элементов двумерного массива
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8); //clocale у меня не работает 
	int arr[5][2] = { { -135, 539 },{ 67, 78 },{ 58, 92 },{ 12, 29 },{57, 67} };
	int summ = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
			summ += arr[i][j];
	}
	cout << "Сумма элементов массива: " << summ;
	return 0;
}