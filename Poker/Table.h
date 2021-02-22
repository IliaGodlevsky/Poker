#ifndef TABLE_H_
#define TABLE_H_

#include <vector>

#include "Deck.h"
#include "Hand.h"
#include "Combinator.h"

class Table
{
public:
	Table(int players);
	void deal();
	void showCards(std::ostream& os)const;
	void reset();
private:
	const int PLAYERS;
	Combinator combinator;
	Deck deck;
	Cards river;
	std::vector<Hand> hands;
};
#endif
