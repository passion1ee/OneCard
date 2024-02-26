#include "AttackCard.h"

AttackCard::AttackCard(Suit suit_, int num) : Card(suit_, num) {
	switch (num)
	{
	case 1:
		if (suit_ == Suit::spades)
			damage = 5;
		else
			damage = 3;

		break;

	case 2:
		damage = 2;
		break;

	default:
		damage = 1;
		break;
	}
}

inline void AttackCard::runEvent() {
	
}


