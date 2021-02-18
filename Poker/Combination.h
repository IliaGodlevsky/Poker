#ifndef COMBINATION_H_
#define COMBINATION_H_

#include <vector>

#include "Card.h"

class Combination
{
public:	
	Combination(const std::vector<const Card&>&);
	bool operator >(const Combination&)const;
	bool operator==(const Combination&)const;
	bool operator <(const Combination&)const;
	bool operator!=(const Combination&)const;
private:
	std::vector<const Card&> cards;
};
#endif