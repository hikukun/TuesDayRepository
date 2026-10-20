#pragma once
#include"Sorcerer.h"
class Inumaki: public Sorcerer
{
public:
	int hp = 90;
	int energy = 70;
	void UseTechnique()override;
};

