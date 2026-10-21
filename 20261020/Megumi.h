#pragma once
#include"Sorcerer.h"
class Megumi: public Sorcerer
{
public:
	Megumi()
	{
		name = "megumi";
		hp = 100;
		energy = 80;
	}

	void UseTechnique()override;

};

