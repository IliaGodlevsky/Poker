#ifndef HAND_H_
#define HAND_H_

#include "Card.h"

class Hand
{
public:
	Hand(const Card&, const Card&);
	friend std::ostream& operator<<(std::ostream&, const Hand&);
private:
	const Card& firstCard;
	const Card& secondCard;
};
#endif
