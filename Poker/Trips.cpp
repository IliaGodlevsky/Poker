#include "Trips.h"
#include "Functions.h"

bool Trips::tryDetectCombination(const Cards& cards, const Hand& hand)
{
	return GroupCombination::tryDetectCombination(cards, hand, byCost);
}

std::string Trips::getName()const
{
	return "Trips";
}

int Trips::getRequiredCardsForCombo()const
{
	return 3;
}

Trips::~Trips()
{

}