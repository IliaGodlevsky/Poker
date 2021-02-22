#ifndef GROUP_COMBO_H_
#define GROUP_COMBO_H_

#include "Combination.h"
typedef Groups::reverse_iterator GroupPos;

class GroupCombination : virtual public Combination
{
public:
	virtual ~GroupCombination() = 0;
protected:
	virtual GroupPos getRequiredGroup(GroupPos rbegin,
		GroupPos rend, int requiredCardsCount)const;
	virtual bool tryDetectCombination(const Cards&, 
		const Hand&, int(*selector)(const Card&));
};
#endif
