#ifndef REVERSECARD_H
#define REVERSECARD_H

#include "Card.h"

class ReverseCard : public Card {
public:
	ReverseCard(Suit);
	virtual inline void runEvent() final;
};

/*Qī��� ������ ���� ������ �ݴ�� �ٲ۴�.(��, ����, ������)
A��B��C��A�� ������ ������ ������ ���, C�� Q ī�带 ���� C��B��A��C�� ������ ��������.
1:1 ��ġ�� ��쿡�� �� Ư���� �ƹ��� ȿ���� ����. ������ 1:1 ��ġ �������� K ī��� ������ ���� �����ϴ� ��쵵 �ִ�.*/

#endif //REVERSECARD_H