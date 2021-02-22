#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include "Card.h"

int bySuit(const Card&);
int byCost(const Card&);
Groups group_by(const Cards& cards, 
	int(*selector)(const Card&));
void show(const Cards& cards, std::ostream&);

#endif