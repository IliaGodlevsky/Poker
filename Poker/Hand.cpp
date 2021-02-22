#include "Hand.h"

Hand::Hand(const Card& card1, const Card& card2) 
	: first(card1), second(card2)
{

}

std::ostream& operator<<(std::ostream& os, const Hand& hand)
{
	os << hand.first;
	os << hand.second;
	return os;
}

Cards operator+(const Cards& cards, const Hand& hand)
{
	Cards temp(cards);
	temp.push_back(hand.first);
	temp.push_back(hand.second);
	return temp;
}