#include "FourOfAKind.h"
#include "Functions.h"

bool FourOfAKind::tryDetectCombination(const Cards& �ards, const Hand& hand)
{
	return GroupCombination::tryDetectCombination(�ards, hand, byCost);
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