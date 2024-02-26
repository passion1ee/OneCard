#ifndef PLAYER_H
#define PLAYER_H

#include "deck.h"

class Player {
private:
	vector<Card*> deck;

public:
	inline Card* layDown(size_t); // ���̺� ī�� ����

	inline void takeCard(Card*, int quantity = 1);
	//quantity�� ����ī�忡 ���� increaseFactor�� ������ ���� ����

	inline void showDeck();
	inline size_t cardsNum();

};


#endif //PLAYER_H