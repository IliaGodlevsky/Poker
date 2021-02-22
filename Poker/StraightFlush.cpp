#include <algorithm>

#include "StraightFlush.h"
#include "Functions.h"

std::string StraightFlush::getName()const
{
	return "Straight Flush";
}

bool StraightFlush::tryDetectCombination(const Cards& cards, const Hand& hand)
{
	bool isDetected = GroupCombination::tryDetectCombination(cards, hand, bySuit);
	bool isOrdered = OrderCombination::hasCombination(comboCards);
	return isDetected && isOrdered;
}

GroupPos StraightFlush::getRequiredGroup(GroupPos rbegin,
	GroupPos rend, int requiredCardsCount)const
{
	auto predicate = [=](const Group& g)
	{
		return g.second.size() >= requiredCardsCount;
	};
	return std::find_if(rbegin, rend, predicate);
}

int StraightFlush::getRequiredCardsForCombo()const
{
	return 5;
}

StraightFlush::~StraightFlush()
{
	
}