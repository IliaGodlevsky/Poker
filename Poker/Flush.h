#ifndef FLUSH_H_
#define FLUSH_H_

#include "GroupCombination.h"

class Flush : public GroupCombination
{
public:
	bool tryDetectCombination(const Cards&, const Hand&) override;
	std::string getName()const override;
	~Flush();
protected:
	int getRequiredCardsForCombo()const override;
};

#endif
