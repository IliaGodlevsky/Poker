#ifndef TRIPS_H_
#define TRIPS_H_

#include "GroupCombination.h"

class Trips : public GroupCombination
{
public:
	bool tryDetectCombination(const Cards&, const Hand&) override;
	std::string getName()const override;
	~Trips();
protected:
	int getRequiredCardsForCombo()const override;
};

#endif