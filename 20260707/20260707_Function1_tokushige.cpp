#include<iostream>
using namespace std;

void EVEN(int even[], int index)
{
	cout << "‹ô”\n";
	for (int i = 0; i < index; i++)
	{
		cout << even[i] << endl;
	}
}

void ODD(int odd[], int index)
{
	cout << "Šï”\n";
	for (int i = 0; i < index; i++)
	{
		cout << odd[i] << endl;
	}
}