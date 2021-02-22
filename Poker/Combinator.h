#ifndef COMBINATOR_H_
#define COMBINATOR_H_

#include "Pair.h"
#include "TwoPairs.h"
#include "Trips.h"
#include "Straight.h"
#include "Flush.h"
#include "FullHouse.h"
#include "FourOfAKind.h"
#include "StraightFlush.h"

class Combinator
{
public:
	Combinator();
	const Combination* getCombo(const Cards&, const Hand&)const;
	~Combinator();
private:
	const int COMBOS;
	Combination** combos;
};
#endif