#include "Combinator.h"
#include "Pair.h"
#include "TwoPairs.h"
#include "Trips.h"
#include "Straight.h"
#include "Flush.h"
#include "FullHouse.h"
#include "FourOfAKind.h"
#include "StraightFlush.h"

Combinator::Combinator() : COMBOS(8)
{
	combos = new Combination * [COMBOS]
	{
		new StraightFlush(),
		new FourOfAKind(),
		new FullHouse(),
		new Flush(),
		new Straight(),
		new Trips(),
		new TwoPairs(),
		new Pair()
	};
}

const Combination* Combinator::getCombo(const Cards& cards, 
	const Hand& hand)const
{
	for (int i = 0; i < COMBOS; i++)
	{
		if (combos[i]->tryDetectCombination(cards, hand))
		{
			return combos[i];
		}
	}

	return nullptr;
}

Combinator::~Combinator()
{
	for (int i = 0; i < COMBOS; i++)
	{
		delete combos[i];
	}
	delete combos;
}