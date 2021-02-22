#ifndef MULTIGROUP_H_
#define MULTIGROUP_H_

#include "GroupCombination.h"

class MultiGroupCombination : public GroupCombination
{
public:
	bool tryDetectCombination(const Cards&, const Hand&) override;
protected:
	virtual int getRequiredCardsCountForFirstGroup()const = 0;
	virtual int getRequiredCardsCountForSecondGroup()const = 0;
	virtual GroupPos nextGroupStartPos(Groups&, GroupPos)const = 0;
};
#endif
