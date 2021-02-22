#include "Combination.h"
#include "Functions.h"

std::ostream& operator<<(std::ostream&os , const Combination& combo)
{
	show(combo.comboCards, os);
	return os;
}

bool Combination::isRequiredGroup(const Group& group)const
{
	return group.second.size() == getRequiredCardsForCombo();
}

Combination::~Combination()
{
	
}