#include <algorithm>

#include "Straight.h"
#include "Functions.h"

std::string Straight::getName()const
{
	return "Straight";
}

bool Straight::tryDetectCombination(const Cards& cards, const Hand& hand)
{
	comboCards = cards + hand;
	this->hand = &hand;
	Cards group = comboCards;
	std::sort(group.begin(), group.end());
	return OrderCombination::hasCombination(group);
}

Straight::~Straight()
{

}

int Straight::getRequiredCardsForCombo()const
{
	return 5;
}