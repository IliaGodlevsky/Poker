#include <algorithm>

#include "GroupCombination.h"
#include "Functions.h"

bool GroupCombination::tryDetectCombination(const Cards& cards, 
	const Hand& hand, int(*selector)(const Card&))
{
	Combination::prepareCards(cards, hand);
	bool isDetected = false;
	auto groups = group_by(comboCards, selector);
	int requiredCount = getRequiredCardsForCombo();
	auto requiredGroup = getRequiredGroup(groups.rbegin(), 
		groups.rend(), requiredCount);
	if (requiredGroup != groups.rend())
	{
		comboCards = requiredGroup->second;
		std::sort(comboCards.begin(), comboCards.end());
		isDetected = true;
	}

	return isDetected;
}

GroupPos GroupCombination::getRequiredGroup(GroupPos rbegin,
	GroupPos rend, int requiredCardsCount)const
{
	auto predicate = [=](const Group& g)
	{
		return g.second.size() == requiredCardsCount;
	};
	return std::find_if(rbegin, rend, predicate);
}

GroupCombination::~GroupCombination()
{

}