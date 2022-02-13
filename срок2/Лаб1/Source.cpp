#include <iostream>
#include <iomanip>
using namespace std;
int sort(int* arr, int size)
{
	int flag = 0;
	int perest = 0;
	int per = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				perest++;
				flag++;
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			else per++;

		}
		if (flag == 0)
		{
			break;
		}
	}
	per = per + perest;
	cout << endl << "Chislo perevirok: " << per << endl;
	return perest;
}