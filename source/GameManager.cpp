#include "GameManager.h"

GameManager::GameManager() : increaseFactor(1) {}

void GameManager::init() {

	int playerNum;
	do {
		cin >> playerNum;
	} while (playerNum < 1 || playerNum > 6);
	players.assign(playerNum, Player());



	int initCards = (30 / playerNum) <= 10 ? (30 / playerNum) : 10;

	for (int i = 0; i < initCards; ++i)
		for (int j = 0; j < playerNum; ++j)
			players[j].takeCard(manager.dealCard());
}

inline void GameManager::update() {

	int turn{};
	while (isDeckEmpty()) {
		// ������ �÷��̾��� ���� �����ش�.

		int choose;
		do {
			cin >> choose;
		} while (choose < -1 || choose > players[turn].cardsNum());
		// �� ��° ī�带 ���� �����Ѵ�. -1 ���� �� ���� ���� ( -1 <= choose <= players[turn].cardsNum())
		// ##���ǿ� �´� ī�常 �� �� �ְ� �������Ѵ�
		// ##���ǿ� ���� ���� ��� �ٽ� ī�带 �����ϰ� �Ѵ�
		if (choose == -1)
			players[turn].takeCard(manager.dealCard(), increaseFactor);
		else
			eventCard(players[turn].layDown(choose));

	}
}

inline void GameManager::render(int Trun) {

}


inline void GameManager::eventCard(Card* card) {

}

inline bool GameManager::isDeckEmpty() {
	for (int i = 0; i < players.size(); ++i) {
		players[i].cardsNum() ? false : true;
	}
}
