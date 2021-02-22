#ifndef TWO_PAIRS_H_
#define TWO_PAIRS_H_

#include "MultiGroupCombination.h"

class TwoPairs : public MultiGroupCombination
{
public:
	bool tryDetectCombination(const Cards&, const Hand&) override;
	std::string getName()const override;
	~TwoPairs();
protected:
	int getRequiredCardsCountForFirstGroup()const override;
	int getRequiredCardsCountForSecondGroup()const override;
	GroupPos nextGroupStartPos(Groups&, GroupPos)const override;
	int getRequiredCardsForCombo()const override;
};

#endif
