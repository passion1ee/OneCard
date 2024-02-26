#ifndef SUITCHANGECARD_H
#define SUITCHANGECARD_H

#include "Card.h"

class SuitChangeCard : public Card {
public:
	SuitChangeCard(Suit);
	virtual inline void runEvent() final;
};

/*7 카드는 자신이 원하는 무늬로 바꿀 수 있다.(체인지, 스위치)
♣7을 내고 '스페이드'라고 말하면 다음 차례의 사람은 스페이드를 내야 한다. 스페이드가 아닌 다른 모양의 7을 내도 되며,
이 경우에 체인지 효과는 새로 적용된다.
효과는 낸 후에 적용이 된다. 깔린 카드가 7이 아닌 스페이드인 상황에서 '하트'를 외치면서 ♥7을 낼 수는 없다.*/

#endif //SUITCHANGECARD_H