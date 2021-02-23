#ifndef CARD_H_
#define CARD_H_

#include <iostream>
#include <vector>
#include <string>
#include <map>

class Card;

typedef std::vector<Card> Cards;
typedef std::pair<int, Cards> Group;
typedef std::map<int, Cards> Groups;

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
	bool isPrevious(const Card& card)const;
	friend std::ostream& operator 
		<<(std::ostream&, const Card&);
	Card operator++(int);
	int getCost()const;
	int getSuit()const;
	std::string(*displaySuit)(unsigned);
	~Card();
private:
	unsigned cost;
	unsigned suit;
};

std::string convertCostToString(unsigned cost);
std::string convertSuitToString(unsigned suit);
std::string convertSuitToString2(unsigned suit);
#endif
