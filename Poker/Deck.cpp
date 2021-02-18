#include <algorithm>
#include <random>

#include "Deck.h"

Deck::Deck() : cardsGave(0U)
{	
	for (auto card = Card::DEFAULT_CARD; card != Card::BIGGEST_CARD; card++)
	{
		cards.push_back(card);
	}
}

void Deck::shuffle()
{
	std::random_shuffle(cards.begin(), cards.end());
}

const Card& Deck::getCard()
{
	if (!isEmpty())
	{
		return cards[cardsGave++];
	}

	throw std::exception("Deck is empty");
}

bool Deck::isEmpty()const
{
	return cardsGave == MAX_DECK_SIZE - 1;
}

void Deck::reset()
{
	cardsGave = 0;
}

Hand Deck::getHand()
{
	auto &card1 = getCard();
	auto &card2 = getCard();
	return Hand(card1, card2);
}

std::vector<const Card*> Deck::getCards(unsigned numberOfCards)
{
	if (numberOfCards > MAX_DECK_SIZE)
	{
		numberOfCards = MAX_DECK_SIZE;
	}

	std::vector<const Card*> collection;
	for (int i = 0; i < numberOfCards; i++)
	{
		auto card = &getCard();
		collection.push_back(card);
	}
	return collection;
}