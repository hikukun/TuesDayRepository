#pragma once
#include"Sorcerer.h"
class Gojo: public Sorcerer
{
public:
	Gojo()
	{
		name = "gojo";
		hp = 999;
		energy = 999;
	}

	void UseTechnique()override;

};

