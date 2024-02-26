#ifndef DOUBLETURNCARD_H
#define DOUBLETURNCARD_H

#include "Card.h"

class DoubleTurnCard : public Card {
public:
	DoubleTurnCard(Suit);
	virtual inline void runEvent() final;
};

/*K카드는 카드를 1장 더 낼 수 있다.
앞서 말한 중첩 룰을 적용하는 경우 K 카드는 중첩 룰에 적용되지 않는데,
K를 연속으로 낸 것 자체가 이미 차례를 소비한 것으로 간주하기 때문이다.
K를 냈는데 더 이상 낼 카드가 없다면 카드 1장을 먹어야 한다. 단 그냥 턴을 넘기는 로컬 룰도 있다.*/

#endif //DOUBLETURNCARD_H