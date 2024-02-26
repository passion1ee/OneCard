#ifndef PLAYER_H
#define PLAYER_H

#include "deck.h"

class Player {
private:
	vector<Card*> deck;

public:
	inline Card* layDown(size_t); // 테이블에 카드 내기

	inline void takeCard(Card*, int quantity = 1);
	//quantity는 공격카드에 의한 increaseFactor에 영향을 받을 예정

	inline void showDeck();
	inline size_t cardsNum();

};


#endif //PLAYER_H