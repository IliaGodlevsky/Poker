#include <algorithm>

#include "TwoPairs.h"
#include "Functions.h"

bool TwoPairs::tryDetectCombination(const Cards& cards, const Hand& hand)
{
	return MultiGroupCombination::tryDetectCombination(cards, hand);
}

int TwoPairs::getRequiredCardsCountForFirstGroup()const
{
	return 2;
}

int TwoPairs::getRequiredCardsCountForSecondGroup()const
{
	return 2;
}

GroupPos TwoPairs::nextGroupStartPos(Groups& groups, GroupPos pos)const
{
	return std::next(pos);
}

std::string TwoPairs::getName()const
{
	return "Two Pairs";
}

TwoPairs::~TwoPairs()
{

}

int TwoPairs::getRequiredCardsForCombo()const
{
	return getRequiredCardsCountForFirstGroup()
		+ getRequiredCardsCountForSecondGroup();
}