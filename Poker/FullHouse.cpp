#include <algorithm>

#include "FullHouse.h"
#include "Functions.h"

std::string FullHouse::getName()const
{
	return "Full House";
}

bool FullHouse::tryDetectCombination(const Cards& ñards, const Hand& hand)
{
	return MultiGroupCombination::tryDetectCombination(ñards, hand);
}

int FullHouse::getRequiredCardsCountForFirstGroup()const
{
	return 3;
}

int FullHouse::getRequiredCardsCountForSecondGroup()const
{
	return 2;
}

GroupPos FullHouse::nextGroupStartPos(Groups& groups, GroupPos pos)const
{
	return groups.rbegin();
}

FullHouse::~FullHouse()
{

}

int FullHouse::getRequiredCardsForCombo()const
{
	return getRequiredCardsCountForFirstGroup() 
		+ getRequiredCardsCountForSecondGroup();
}