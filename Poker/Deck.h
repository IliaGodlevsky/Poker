#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include <array>

#include "Card.h"
#include "Hand.h"

class Deck
{
private:
	enum : unsigned 
	{ 
		MAX_DECK_SIZE = 52
	};
public:	
	Deck();
	Deck(const Deck&) = default;
	Deck(Deck&&) = default;
	Deck& operator=(const Deck&) = default;
	Deck& operator=(Deck&&) = default;
	Cards getCards(unsigned numberOfCards);
	Card getCard();
	Hand getHand();
	void shuffle();
	void reset();
	bool isEmpty()const;
private:	
	Cards cards;
	unsigned cardsGave;
};
#endif
