#include"Gojo.h"
#include"Inumaki.h"
#include"Megumi.h"
#include<iostream>
using namespace std;

int main(void)
{
	Inumaki inumaki;
	Megumi megumi;
	Gojo gojo;

	Sorcerer* sorcerer[3] = {&inumaki, &megumi, &gojo};

	for (int i = 0; i < 3; i++)
	{
		sorcerer[i]->ShowStatus();
		sorcerer[i]->UseTechnique();
	}
	return 0;
}