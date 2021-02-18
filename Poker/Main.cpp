#include <ctime>

#include "Deck.h"

int main()
{
	std::srand((unsigned)std::time(nullptr));
	Deck deck;
	deck.shuffle();
	const int CARDS_TO_TAKE = 45;
	auto cards = deck.getCards(CARDS_TO_TAKE);

	for (int i = 0; i < CARDS_TO_TAKE; i++)
	{
		if (i % 5 == 0 && i != 0)
			std::cout << std::endl;
		std::cout << *cards[i];
	}
}