#include "Flush.h"
#include "Functions.h"

bool Flush::tryDetectCombination(const Cards& �ards, const Hand& hand)
{
	bool isDetected = GroupCombination::tryDetectCombination(�ards, hand, bySuit);
	std::reverse(comboCards.begin(), comboCards.end());
	return isDetected;
}


int Flush::getRequiredCardsForCombo()const
{
	return 5;
}

std::string Flush::getName()const
{
	return "Flush";
}

Flush::~Flush()
{

}