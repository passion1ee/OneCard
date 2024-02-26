#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

enum class Suit
{
	hearts,
	diamonds,
	clubs,
	spades
};

class Card {
protected:
	Suit suit;
	int number;

protected:
	Card(Suit suit_, int num) : suit(suit_), number(num) {}

public:
	virtual inline void runEvent() = 0;
	inline constexpr Suit getSuit();
	inline constexpr int getNumber();
};


#endif //CARD_H
