#ifndef DOUBLETURNCARD_H
#define DOUBLETURNCARD_H

#include "Card.h"

class DoubleTurnCard : public Card {
public:
	DoubleTurnCard(Suit);
	virtual inline void runEvent() final;
};

/*Kī��� ī�带 1�� �� �� �� �ִ�.
�ռ� ���� ��ø ���� �����ϴ� ��� K ī��� ��ø �꿡 ������� �ʴµ�,
K�� �������� �� �� ��ü�� �̹� ���ʸ� �Һ��� ������ �����ϱ� �����̴�.
K�� �´µ� �� �̻� �� ī�尡 ���ٸ� ī�� 1���� �Ծ�� �Ѵ�. �� �׳� ���� �ѱ�� ���� �굵 �ִ�.*/

#endif //DOUBLETURNCARD_H