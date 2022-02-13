#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	srand(time(NULL));
    int r = 20;
    int* A = new int[r];
	for (int i = 0; i < r; i++)
	{
		A[i] = i+1;
	}
	cout << "Start array:" << endl;
	for (int i = 0; i < r; i++)
	{
		cout<<"  "<<A[i];
	}
	cout<<endl<<"Chislo perestanovok: "<<sort(A, r)<<endl;
	cout << endl<<"Sort array:" << endl;
	for (int i = 0; i < r; i++)
	{
		cout << "  " << A[i];
	}
	delete[] A;
}