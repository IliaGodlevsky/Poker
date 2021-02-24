#include <algorithm>

#include "OrderCombination.h"
#include "Functions.h"

bool OrderCombination::hasCombination(Cards& cards)
{
	auto checkLimit = cards.size() - (size_t)getRequiredCardsForCombo();
	bool isSorted = false;
	for (int i = 0; i <= checkLimit + 1; i++)
	{
		isSorted = ::is_sorted(cards.begin() + checkLimit, 
			cards.end(), isPrevious);
		if (isSorted)
		{
			comboCards = Cards(cards.begin() + checkLimit, cards.end(), std::allocator<Card>());
			return true;
		}
		std::rotate(cards.rbegin(), cards.rbegin() + 1, cards.rend());
	}	
	return false;
}

OrderCombination::~OrderCombination()
{

}