#include <iostream>
#include <iomanip>
using namespace std;
int sort(int* arr, int size)
{
	int perest = 0, por = 0,flag=0;
	double factor= 1.247;
	double step = size / factor;
	while (step > 1)
	{
		for (int i = 0; i < size-step; i++)
		{
			int j = i + step;
			if (arr[i] > arr[j])
			{
				flag++;
				perest++;
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			else por++;
		}
		step = step / factor;
		if (flag == 0) break;
	}
	por = por + perest;
	cout << endl << "Chislo porivnyan: " << por << endl;
	return perest;
}