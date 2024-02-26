#ifndef JUMPCARD_H
#define JUMPCARD_H

#include "Card.h"

class JumpCard : public Card {
public:
	JumpCard(Suit);
	virtual inline void runEvent() final;
};

/*J카드는 다음 차례의 사람을 한 번 건너 뛰고 그 다음 사람에게 턴을 넘긴다.(점프, 스킵)
일명: A→B→C→A의 순서로 게임을 진행할 경우, A가 J를 내면 B의 차례를 건너뛰고 C의 차례.
인원이 2명일 경우 한 번 더 자신의 턴이 오는 것으로 취급된다.*/

#endif //JUMPCARD_H