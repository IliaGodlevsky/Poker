#include "OrderCombination.h"

bool OrderCombination::isOrdered(Cards& cards)
{
	size_t start = cards.size() - 1U;
	size_t required = (size_t)getRequiredCardsForCombo();
	size_t end = cards.size() - (required - 1U);
	Cards temp;
	temp.push_back(cards[cards.size() - 1]);
	for (size_t i = start; i >= end; i--)
	{
		if (!cards.at(i - 1).isPrevious(cards.at(i)))		
			return false;		
		temp.push_back(cards.at(i - 1));
	}

	comboCards = temp;

	return true;
}

bool OrderCombination::hasCombination(Cards& cards)
{
	size_t required = (size_t)getRequiredCardsForCombo();
	size_t limit = cards.size() - required + 1;
	for (int i = 0; i < limit; i++)
	{
		if (isOrdered(cards))
			return true;
		std::rotate(cards.rbegin(), cards.rbegin() + 1, cards.rend());
	}
	comboCards.clear();
	return false;
}

OrderCombination::~OrderCombination()
{

}