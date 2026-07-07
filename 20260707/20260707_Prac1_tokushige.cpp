#include<iostream>
#include"20260707_Hearderer_tokushige.h"
using namespace std;


int main(void)
{
	int num[10];
	int even[10];
	int odd[10];
	int evencount = 0;
	int oddcount = 0;

	cout << "10ŒÂ‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
		if (num[i] % 2 == 0)
		{
			even[evencount] = num[i];
			evencount++;
		}
		else
		{
			odd[oddcount] = num[i];
			oddcount++;
		}
	}
	EVEN(even, evencount);
	ODD(odd, oddcount);
	return 0;
}


