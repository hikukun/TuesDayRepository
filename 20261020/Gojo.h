#pragma once
#include"Sorcerer.h"
class Gojo: public Sorcerer
{
public:
	int hp = 999;
	int energy = 999;
	void UseTechnique()override;
};

