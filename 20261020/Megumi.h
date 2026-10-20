#pragma once
#include"Sorcerer.h"
class Megumi: public Sorcerer
{
public:
	int hp = 100;
	int energy = 80;
	void UseTechnique()override;
};

