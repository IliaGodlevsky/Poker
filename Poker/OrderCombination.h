#ifndef ORDER_COMBO_H_
#define ORDER_COMBO_H_

#include "Combination.h"

class OrderCombination : virtual public Combination
{
public:
	virtual ~OrderCombination() = 0;
protected:
	virtual bool hasCombination(Cards&);
	virtual bool isOrdered(Cards&);
};

#endif
