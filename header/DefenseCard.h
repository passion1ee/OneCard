#ifndef DEFENSECARD_H
#define DEFENSECARD_H

#include "Card.h"

class DefenseCard : public Card {
public:
	DefenseCard(Suit);
	virtual inline void runEvent() final;
};

//3 ī��� ���� ����� 2�� ����� �� �ִ�. �� ������ ��� ������ ���Ƽ���� 0��(1��)���� ���ص� ���ʸ� �ѱ��.

#endif //DEFENSECARD_H