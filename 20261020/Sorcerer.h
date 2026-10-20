#pragma once
class Sorcerer
{
public:
	int hp;
	int energy;

	virtual void ShowStatus();
	virtual void UseTechnique()=0;
};

