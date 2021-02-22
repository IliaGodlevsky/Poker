#include <algorithm>
#include <random>

#include "Deck.h"

Deck::Deck() : cardsGave(0U)
{	
	Card card;
	for (int i = 0; i < MAX_DECK_SIZE; i++)
	{
		cards.push_back(card++);
	}
}

void Deck::shuffle()
{
	std::random_shuffle(cards.begin(), cards.end());
}

Card Deck::getCard()
{
	if (!isEmpty())
	{
		return cards[cardsGave++];
	}

	throw std::exception("Deck is empty");
}

bool Deck::isEmpty()const
{
	return cardsGave > MAX_DECK_SIZE - 1;
}

void Deck::reset()
{
	cardsGave = 0;
}

Hand Deck::getHand()
{
	return Hand(getCard(), getCard());
}

Cards Deck::getCards(unsigned numberOfCards)
{
	if (numberOfCards > MAX_DECK_SIZE)
	{
		numberOfCards = MAX_DECK_SIZE;
	}

	Cards collection;
	for (unsigned i = 0; i < numberOfCards; i++)
	{
		collection.push_back(getCard());
	}
	return collection;
}