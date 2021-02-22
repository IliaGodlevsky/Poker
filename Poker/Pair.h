#ifndef PAIR_H_
#define PAIR_H_

#include "GroupCombination.h"

class Pair : public GroupCombination
{
public:
	bool tryDetectCombination(const Cards&, const Hand&) override;	
	std::string getName()const override;
	~Pair();
protected:
	int getRequiredCardsForCombo()const override;
};
#endif
