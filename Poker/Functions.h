#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include "Card.h"

int bySuit(const Card&);
int byCost(const Card&);
Groups group_by(const Cards& cards, 
	int(*selector)(const Card&));
void show(const Cards&, std::ostream&);
bool isPrevious(const Card&, const Card&);
Cards remove_duplicates(const Cards&);

template<typename ForwardIterator, typename Predicate>
bool is_sorted(ForwardIterator begin, 
    ForwardIterator end, Predicate pred)
{
    if (begin == end)
        return true;
    auto next = begin;
    while (++next != end) 
    {
        if (!pred(*next, *begin))
            return false;
        ++begin;
    }
    return true;
}

#endif