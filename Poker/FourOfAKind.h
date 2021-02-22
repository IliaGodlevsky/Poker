#ifndef FOUR_OF_A_KIND_H_
#define FOUR_OF_A_KIND_H_

#include "GroupCombination.h"

class FourOfAKind : public GroupCombination
{
public:
	bool tryDetectCombination(const Cards&, const Hand&) override;
	std::string getName()const override;
	~FourOfAKind();
protected:
	int getRequiredCardsForCombo()const override;
private:
};
#endif
