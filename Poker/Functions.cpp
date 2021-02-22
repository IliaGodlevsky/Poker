#include "Functions.h"

Groups group_by(const Cards& cards, int(*selector)(const Card&))
{
	Groups groups;

	for (auto &card : cards)
	{
		int key = selector(card);
		groups[key].push_back(card);
	}

	return groups;
}

int bySuit(const Card& card)
{
	return card.getSuit();
}

int byCost(const Card& card)
{
	return card.getCost();
}

void show(const Cards& cards, std::ostream& os)
{
	for (auto& card : cards)
		os << card;
}