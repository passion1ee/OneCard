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
		// 차례의 플레이어의 덱을 보여준다.

		int choose;
		do {
			cin >> choose;
		} while (choose < -1 || choose > players[turn].cardsNum());
		// 몇 번째 카드를 낼지 선택한다. -1 선택 시 내지 않음 ( -1 <= choose <= players[turn].cardsNum())
		// ##조건에 맞는 카드만 낼 수 있게 만들어야한다
		// ##조건에 맞지 않을 경우 다시 카드를 선택하게 한다
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
