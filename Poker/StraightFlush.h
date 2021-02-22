#ifndef STRAIGHT_FLUSH_H_
#define STRAIGHT_FLUSH_H_

#include "GroupCombination.h"
#include "OrderCombination.h"

class StraightFlush : public GroupCombination, public OrderCombination
{
public:
	bool tryDetectCombination(const Cards&, const Hand&)override;
	std::string getName()const override;
	~StraightFlush();
protected:
	int getRequiredCardsForCombo()const override;
	GroupPos getRequiredGroup(GroupPos rbegin,
		GroupPos rend, int requiredCardsCount)const override;
};
#endif
