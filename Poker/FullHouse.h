#ifndef FULL_HOUSE_H_
#define FULL_HOUSE_H_

#include "MultiGroupCombination.h"

class FullHouse : public MultiGroupCombination
{
public:
	bool tryDetectCombination(const Cards&, const Hand&) override;
	std::string getName()const override;
	~FullHouse();
protected:
	int getRequiredCardsCountForFirstGroup()const override;
	int getRequiredCardsCountForSecondGroup()const override;
	GroupPos nextGroupStartPos(Groups&, GroupPos)const override;
	int getRequiredCardsForCombo()const override;
};

#endif
