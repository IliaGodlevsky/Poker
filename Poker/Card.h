#ifndef CARD_H_
#define CARD_H_

#include <iostream>
#include <string>

enum Suits : unsigned
{
	DIAMONDS = 1,
	SPADES = 2,
	HEARTS = 3,
	CLUBS = 4
};

enum Values : unsigned
{
	TWO = 2,
	THREE = 3,
	FOUR = 4,
	FIVE = 5,
	SIX = 6,
	SEVEN = 7,
	EIGHT = 8,
	NINE = 9,
	TEN = 10,
	JACK = 11,
	QUEEN = 12,
	KING = 13,
	ACE = 14
};

class Card
{
public:
	static Card DEFAULT_CARD;
	static Card BIGGEST_CARD;
	Card();
	Card(const Card&) = default;
	Card(Card&&) = default;
	Card& operator=(const Card&) = default;
	Card& operator=(Card&&) = default;
	Card(unsigned, unsigned);
	bool operator < (const Card&) const;
	bool operator > (const Card&) const;
	bool operator ==(const Card&) const;
	bool operator !=(const Card&) const;
	bool operator >=(const Card&) const;
	bool operator <=(const Card&) const;
	friend std::ostream& operator <<(std::ostream&, const Card&);
	Card operator++(int);
	void flip();
	~Card();
private:
	bool isSuitUp;
	unsigned cost;
	unsigned suit;
};

std::string convertCostToString(unsigned cost);
std::string convertSuitToString(unsigned suit);
#endif
