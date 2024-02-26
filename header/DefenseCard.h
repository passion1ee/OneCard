#ifndef DEFENSECARD_H
#define DEFENSECARD_H

#include "Card.h"

class DefenseCard : public Card {
public:
	DefenseCard(Suit);
	virtual inline void runEvent() final;
};

//3 카드는 같은 모양의 2를 방어할 수 있다. 방어에 성공한 경우 누적된 페널티량을 0장(1장)으로 없앤뒤 차례를 넘긴다.

#endif //DEFENSECARD_H