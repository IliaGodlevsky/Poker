#include "Combination.h"
#include "Functions.h"

std::ostream& operator<<(std::ostream&os , const Combination& combo)
{
	show(combo.comboCards, os);
	return os;
}

void Combination::prepareCards(const Cards& cards, const Hand& hand)
{
	comboCards = cards + hand;
	comboCards = remove_duplicates(comboCards);
	this->hand = &hand;
}

Combination::~Combination()
{
	
}