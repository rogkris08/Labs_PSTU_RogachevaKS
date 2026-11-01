#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int arr[5] = {13, 278, 95, 1, 512};
	int max = arr[0];
	int min = arr[0];
	int indmin = 0, indmax = 0;
	int colmin = 1, colmax = 1;
	bool flag1 = 0;

	for (int i = 1; i < 5; i++)
	{
		if (arr[i] >= max)
		{
			if (arr[i] == max)
			{
				indmax = i;
				colmax += 1;
				flag1 = 1;
			}
			
			if (flag1 == 0)
			{
				indmax = i;
				max = arr[i];
				colmax = 1;
			}
			flag1 = 0;
		}
		flag1 = 0;
		if (arr[i] <= min)
		{
			if (arr[i] == min)
			{
				flag1 = 1;
				colmin += 1;
				indmin = i;
			}

			if (flag1 == 0)
			{
				colmin = 1;
				min = arr[i];
				indmin = i;
			}
			flag1 = 0;
		}
	}
	
	cout << arr << endl;
	cout << "min, indmin, colmin" << endl;
	cout << min << " " << indmin << " " << colmin << endl;
	cout << "max, indmax, colmax" << endl;
	cout << max << " " << indmax << " " << colmax;
	return 0;
}