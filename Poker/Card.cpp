#include "Card.h"

std::string convertCostToString(unsigned cost)
{
	switch (cost)
	{
	case Values::TWO:	return "2";
	case Values::THREE: return "3";
	case Values::FOUR:	return "4";
	case Values::FIVE:	return "5";
	case Values::SIX:	return "6";
	case Values::SEVEN: return "7";
	case Values::EIGHT: return "8";
	case Values::NINE:	return "9";
	case Values::TEN:	return "10";
	case Values::JACK:	return "J";
	case Values::QUEEN: return "Q";
	case Values::KING:	return "K";
	case Values::ACE:	return "A";
	default: throw std::exception();
	}
}

std::string convertSuitToString(unsigned suit)
{

	switch (suit)
	{
	case Suits::CLUBS:		return "\x06";
	case Suits::DIAMONDS:	return "\x05";
	case Suits::HEARTS:		return "\x04";
	case Suits::SPADES:		return "\x03";
	default: throw std::exception();
	}
}

std::string convertSuitToString2(unsigned suit)
{

	switch (suit)
	{
	case Suits::CLUBS:		return "c";
	case Suits::DIAMONDS:	return "d";
	case Suits::HEARTS:		return "h";
	case Suits::SPADES:		return "s";
	default: throw std::exception();
	}
}

Card::Card() : Card(Values::TWO, Suits::DIAMONDS)
{

}

Card::Card(unsigned cost, unsigned suit)
	: cost(cost), suit(suit)
{
	displaySuit = convertSuitToString2;
}

bool Card::operator >(const Card& card)const
{
	return cost > card.cost;
}

bool Card::operator < (const Card& card)const
{
	return cost < card.cost;
}

bool Card::operator==(const Card& card)const
{
	return cost == card.cost;
}

bool Card::operator!=(const Card& card)const
{
	return !(*this == card);
}

std::ostream& operator <<(std::ostream& os, const Card& card)
{
	std::string suitString = card.displaySuit(card.suit);
	std::string costString = convertCostToString(card.cost);
	os << "[" << costString << ":" << suitString << "] ";
	return os;
}

Card Card::operator++(int i)
{
	auto temp = *this;
	cost++;
	if (cost > Values::ACE)
	{
		cost = Values::TWO;
		suit++;
		if (suit > Suits::CLUBS)
		{
			suit = Suits::DIAMONDS;
		}
	}
	return temp;
}


bool Card::isPrevious(const Card& card)const
{
	if (card.cost == Values::TWO)
	{
		return cost == Values::ACE;
	}
	else
	{
		return cost == card.cost - 1;
	}
}

int Card::getCost()const
{
	return cost;
}

int Card::getSuit()const
{
	return suit;
}

Card::~Card()
{

}