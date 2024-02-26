#ifndef REVERSECARD_H
#define REVERSECARD_H

#include "Card.h"

class ReverseCard : public Card {
public:
	ReverseCard(Suit);
	virtual inline void runEvent() final;
};

/*Q카드는 게임의 진행 방향을 반대로 바꾼다.(빽, 빠꾸, 리버스)
A→B→C→A의 순서로 게임을 진행할 경우, C가 Q 카드를 내면 C→B→A→C로 순서가 뒤집힌다.
1:1 매치의 경우에는 그 특성상 아무런 효과가 없다. 때문에 1:1 매치 한정으로 K 카드와 동일한 룰을 적용하는 경우도 있다.*/

#endif //REVERSECARD_H