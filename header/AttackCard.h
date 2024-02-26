#ifndef ATTACKCARD_H
#define ATTACKCARD_H

#include "Card.h"

class AttackCard : public Card {
private:
	int damage;

public:
	AttackCard(Suit, int);
	virtual inline void runEvent() final;

	int getDamage() {}
};

/*일반적으로 통용되는 룰에 따르면 2, A가 공격 카드에 속하며, 다음 차례의 상대방에게 일정량의 카드를 강제로 먹인다.
격을 받은 상대는 반드시 방어 카드를 내서 막거나 낼 수 있는 다른 공격 카드를 내서 넘겨야만 한다.
다른 일반 카드는 낼 수 없으며, 내지 못하면 그 공격 카드에 정해진 숫자만큼 카드 뭉치에서 카드를 가져가고 차례를 넘긴다.

일반적으로 공격 카드끼리는 누적 효과가 있으며, 이 누적 효과는 덧셈으로 처리한다. 예를 들어 ♥2 - ♥A - ♣A라면 2장 + 3장 + 3장 = 8장이다.

A(1) 카드는 자신의 다음 차례 사람에게 3장을 추가로 먹인다.
♠A의 경우 5장(4장)을 추가로 먹이고 다른 문양의 A로 지원 공격할 수 없다.(최초 공격으로 인한 페널티는 5장으로 같음)
다음 사람은 다른 무늬 A로 지원공격(내가 그 카드를 안먹고 추가 공격을 하며 턴을 넘김)을 해야 한다.
A카드는 연속으로 낼 수 없다.

2 카드는 자신의 다음 차례 사람에게 2장을 추가로 먹인다.*/

#endif //ATTACKCARD_H