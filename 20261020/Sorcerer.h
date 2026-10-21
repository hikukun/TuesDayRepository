#pragma once
#include<string>
using namespace std;
class Sorcerer
{
public:

	string name;
	int hp;
	int energy;

	virtual void ShowStatus();
	virtual void UseTechnique()=0;

};

