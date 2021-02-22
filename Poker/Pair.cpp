#include "Pair.h"
#include "Functions.h"

bool Pair::tryDetectCombination(const Cards& cards, const Hand& hand)
{
	return GroupCombination::tryDetectCombination(cards, hand, byCost);
}

std::string Pair::getName()const
{
	return "Pair";
}

Pair::~Pair()
{

}

int Pair::getRequiredCardsForCombo()const
{
	return 2;
}