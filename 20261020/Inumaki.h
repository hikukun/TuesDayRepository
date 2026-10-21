#pragma once
#include"Sorcerer.h"
class Inumaki: public Sorcerer
{
public:
	Inumaki()
	{
		name = "inumaki";
		hp = 90;
		energy = 70;
	}

	void UseTechnique()override;

};

