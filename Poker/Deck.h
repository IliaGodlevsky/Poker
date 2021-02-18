#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include <array>

#include "Card.h"
#include "Hand.h"

class Deck
{
private:
	enum : unsigned { MAX_DECK_SIZE = 52, CARDS_IN_FLOP = 3, CARDS_IN_RIVER = 5 };
public:	
	Deck();
	std::vector<const Card*> getCards(unsigned numberOfCards);
	const Card& getCard();
	void shuffle();
	void reset();
	Hand getHand();
	bool isEmpty()const;
private:	
	std::vector<Card> cards;
	unsigned cardsGave;
};
#endif
