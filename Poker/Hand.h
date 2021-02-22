#ifndef HAND_H_
#define HAND_H_

#include <vector>

#include "Card.h"

class Hand
{
public:
	Hand() = default;
	Hand(const Card&, const Card&);
	Hand& operator=(const Hand&) = default;
	friend std::ostream& operator<<(std::ostream&, const Hand&);
	friend Cards operator+(const Cards&, const Hand&);
private:
	Card first;
	Card second;
};
#endif
