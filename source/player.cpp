#include "Player.h"

inline Card* Player::layDown(size_t index) {
	Card* layDownCard = deck[index];
	deck.erase(deck.begin() + index);

	return layDownCard;
}

inline void Player::takeCard(Card* card, int quantity) {
	if (quantity == 1) {
		deck.push_back(card);
	}//ī�带 �ȳ��� �ϳ� ������, init�ÿ� initDeck�� ������
	else {
		for(int i = 0; i < quantity; ++i)
			deck.push_back(card);
	}//���ݹ����� �Ծ�����
}

inline size_t Player::cardsNum() {
	return deck.size();
}
