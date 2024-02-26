#ifndef NOMALCARD_H
#define NOMALCARD_H

#include "Card.h"

class NomalCard : public Card {
public:
	NomalCard(Suit, int);
	virtual inline void runEvent() final;
};

#endif //NOMALCARD_H