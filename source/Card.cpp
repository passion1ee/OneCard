#include "Card.h"

inline constexpr Suit Card::getSuit() {
	return suit;
}

inline constexpr int Card::getNumber() {
	return number;
}
