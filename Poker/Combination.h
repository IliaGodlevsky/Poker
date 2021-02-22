#ifndef COMBINATION_H_
#define COMBINATION_H_

#include <vector>
#include <map>

#include "Card.h"
#include "Hand.h"

class Combination
{
	friend std::ostream& operator<<(std::ostream&, const Combination&);
public:
	virtual bool tryDetectCombination(const Cards&, const Hand&) = 0;
	virtual std::string getName()const = 0;	
	virtual ~Combination() = 0;
protected:
	bool isRequiredGroup(const Group&)const;
	virtual int getRequiredCardsForCombo()const = 0;
	const Hand* hand;
	Cards comboCards;
};
#endif
