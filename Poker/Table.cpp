#include "Table.h"
#include "Functions.h"

Table::Table(int players)
	: PLAYERS(players)
{

}

void Table::deal()
{
	deck.shuffle();
	const int RIVER = 5;
	river = deck.getCards(RIVER);
	for (int i = 0; i < PLAYERS; i++)
	{
		hands.push_back(deck.getHand());
	}
}

void Table::showCards(std::ostream& os)const
{
	const Combination* combo;
	os << "River: ";
	show(river, os);
	os << std::endl << std::endl;
	for (int i = 0; i < PLAYERS; i++)
	{
		os << "Hand:  " << hands[i] << std::endl;
		combo = combinator.getCombo(river, hands[i]);
		if (nullptr != combo)
			os << "Combo: " << *combo << "[" << combo->getName() << "]\n";
		os << std::endl;
	}
}

void Table::reset()
{
	deck.reset();
	river.clear();
	hands.clear();
}