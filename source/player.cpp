#include "Player.h"

inline Card* Player::layDown(size_t index) {
	Card* layDownCard = deck[index];
	deck.erase(deck.begin() + index);

	return layDownCard;
}

inline void Player::takeCard(Card* card, int quantity) {
	if (quantity == 1) {
		deck.push_back(card);
	}//카드를 안내서 하나 먹을때, init시에 initDeck을 받을때
	else {
		for(int i = 0; i < quantity; ++i)
			deck.push_back(card);
	}//공격받은걸 먹었을때
}

inline size_t Player::cardsNum() {
	return deck.size();
}
