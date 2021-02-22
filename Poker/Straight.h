#ifndef STRAIGHT_H_
#define STRAIGHT_H_

#include "OrderCombination.h"

class Straight : public OrderCombination
{
public:
	bool tryDetectCombination(const Cards&, const Hand&) override;
	std::string getName()const override;
	~Straight();
protected:
	int getRequiredCardsForCombo()const override;
private:
	bool isStraight(const Cards& cards);
};

#endif
