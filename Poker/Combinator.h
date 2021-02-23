#ifndef COMBINATOR_H_
#define COMBINATOR_H_

#include "Combination.h"

class Combinator
{
public:
	Combinator();
	const Combination* getCombo(const Cards&, 
		const Hand&)const;
	~Combinator();
private:
	const int COMBOS;
	Combination** combos;
};
#endif