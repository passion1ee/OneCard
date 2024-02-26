#ifndef JUMPCARD_H
#define JUMPCARD_H

#include "Card.h"

class JumpCard : public Card {
public:
	JumpCard(Suit);
	virtual inline void runEvent() final;
};

/*Jī��� ���� ������ ����� �� �� �ǳ� �ٰ� �� ���� ������� ���� �ѱ��.(����, ��ŵ)
�ϸ�: A��B��C��A�� ������ ������ ������ ���, A�� J�� ���� B�� ���ʸ� �ǳʶٰ� C�� ����.
�ο��� 2���� ��� �� �� �� �ڽ��� ���� ���� ������ ��޵ȴ�.*/

#endif //JUMPCARD_H