#include <algorithm>

#include "MultiGroupCombination.h"
#include "Functions.h"

bool MultiGroupCombination::tryDetectCombination(const Cards& cards, const Hand& hand)
{
	Combination::prepareCards(cards, hand);
	bool isDetected = false;

	auto groups = group_by(comboCards, byCost);

	int firstCount = getRequiredCardsCountForFirstGroup();
	int secondCount = getRequiredCardsCountForSecondGroup();

	auto firstGroupPair = GroupCombination::getRequiredGroup(
		groups.rbegin(), groups.rend(), firstCount);

	auto rbegin = nextGroupStartPos(groups, firstGroupPair);
	auto secondGroupPair = GroupCombination::getRequiredGroup(
		rbegin, groups.rend(), secondCount);

	if (firstGroupPair != groups.rend() &&  secondGroupPair != groups.rend())
	{
		comboCards = firstGroupPair->second;
		std::copy(secondGroupPair->second.begin(),
			secondGroupPair->second.end(), std::back_inserter<Cards>(comboCards));
		std::sort(comboCards.begin(), comboCards.end());
		isDetected = true;
	}

	return isDetected;
}