#ifndef SUITCHANGECARD_H
#define SUITCHANGECARD_H

#include "Card.h"

class SuitChangeCard : public Card {
public:
	SuitChangeCard(Suit);
	virtual inline void runEvent() final;
};

/*7 ī��� �ڽ��� ���ϴ� ���̷� �ٲ� �� �ִ�.(ü����, ����ġ)
��7�� ���� '�����̵�'��� ���ϸ� ���� ������ ����� �����̵带 ���� �Ѵ�. �����̵尡 �ƴ� �ٸ� ����� 7�� ���� �Ǹ�,
�� ��쿡 ü���� ȿ���� ���� ����ȴ�.
ȿ���� �� �Ŀ� ������ �ȴ�. �� ī�尡 7�� �ƴ� �����̵��� ��Ȳ���� '��Ʈ'�� ��ġ�鼭 ��7�� �� ���� ����.*/

#endif //SUITCHANGECARD_H