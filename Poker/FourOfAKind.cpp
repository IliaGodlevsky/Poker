#include "FourOfAKind.h"
#include "Functions.h"

bool FourOfAKind::tryDetectCombination(const Cards& ñards, const Hand& hand)
{
	return GroupCombination::tryDetectCombination(ñards, hand, byCost);
}

int FourOfAKind::getRequiredCardsForCombo()const
{
	return 4;
}

std::string FourOfAKind::getName()const
{
	return "Four Of A Kind";
}

FourOfAKind::~FourOfAKind()
{

}