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

bool isPrevious(const Card& first, const Card& second)
{
	return second.isPrevious(first);
}

Cards remove_duplicates(const Cards& cards)
{
	Cards temp;
	auto grouped = group_by(cards, bySuit);
	Groups groups;
	for (auto it = grouped.begin(); it != grouped.end(); it++)
	{
		groups = group_by(it->second, byCost);
		for (auto jt = groups.begin(); jt != groups.end(); jt++)
		{
			for (auto lt = jt->second.begin(); lt != jt->second.end(); lt++)
			{
				temp.push_back(*lt);
			}
		}
	}
	return temp;
}