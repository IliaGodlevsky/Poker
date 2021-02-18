#include "Hand.h"

Hand::Hand(const Card& card1, const Card& card2) 
	: firstCard(card1), secondCard(card2)
{

}

std::ostream& operator<<(std::ostream& os, const Hand& hand)
{
	os << hand.firstCard;
	os << hand.secondCard;
	return os;
}